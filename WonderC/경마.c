// 12마리의 말이 달림
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int horse_length[12] = {0};
    srand( (unsigned)time(NULL) );
    int length_random;
    for(;;) {
        for (int i = 0; i < 12; i++) {
            length_random = rand() % 3;
            horse_length[i] += length_random;
            for (int j = 0; j <= horse_length[i]; j++) {
                printf(" ");
            }
            printf("%d:>\n", i+1);
        }
        for (int k = 0; k < 12; k++) {
            if (horse_length[k] >= 20) break;
        }
        system("Sleep 1");
        system("cls");
    }
    printf("끝\n");
    return 0;
}