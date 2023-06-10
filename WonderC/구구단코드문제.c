#include <stdio.h>

int main() {
    int dan = 2, num, k;

    for (k = 72, num = 0; k > 0; k--) {
        num++;
        printf("%dx%d=%d ",dan, num, dan * num);
        if (num == 9) {
            num = 0, dan++;
            printf("\n");
        }
    }
    return 0;
}