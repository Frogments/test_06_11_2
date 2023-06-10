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
    srand((unsigned)time(NULL));
    for (int i = 0; i < 6; i++) {
        *(lotto_nums + i) = rand() % 45 + 1;
        for (int j = 0; j <= i; j++)
    }
}