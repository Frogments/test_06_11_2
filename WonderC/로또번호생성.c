#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(void) {
    int lotto_nums[6];
    input_nums(lotto_nums);
    print_nums(lotto_nums);
    return 0;
}

void input_nums(int *lotto_nums) {
    srand( (unsigned)time(NULL) );
    for (int i = 0; i < 6; i++) {
        *(lotto_nums + i) = rand() % 45 + 1;
    }
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (i != j && *(lotto_nums + i) == *(lotto_nums + j)) {
                input_nums(lotto_nums);
                break;
            }
        }
    }
}

void print_nums(int *lotto_nums) {
    for (int i = 0; i < 6; i++) {
        printf("%4d", *(lotto_nums + i));
    }
}