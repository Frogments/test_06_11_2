#include <stdio.h>

int main() {
    int perh = 12800, wtime, meal, sum;

    printf("일한 시간: ");
    scanf("%d", &wtime);

    sum = wtime * perh;
    if (wtime >= 40) {
        sum = sum + (wtime / 4) * 10000;
        sum = sum + (sum * 0.1);
    }
    else {
        sum = sum + wtime / 4 * 9000;
        sum = sum + (sum * 0.02);
    }
    printf("받는 금액 %d원\n", sum);

    return 0;
}