#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int horse[12] = {0};
    int go = 1, win, k, m;

    srand( (unsigned)time(NULL));
    while (go) {
        system("cls");
        for(k = 0; k < 12; k++) {
            horse[k] += rand() % 10;
            for (m = 0; m < horse[k]; m++)
                printf(" ");
            printf("%d:>\n\n", k);
            if (horse[k] > 100) {
                win = k;
                go = 0;
            }
        }
        system("Sleep 1");
    }
    printf("\n < %d번 말 승리 >\n", win);
    return 0;
}