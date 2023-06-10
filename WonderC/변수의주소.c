#include <stdio.h> 

double print_score(int *score, int size) {
    int sum = 0, k;

    for (k = 0; k < size; k++) {
        printf("%d = %d점, ", k, score[k]);
        sum = sum + score[k];
    }

    return sum;
}

int main(void)
{
    int score[5] = {75, 84, 13, 96, 46}, sum;

    sum = print_score(score, 5);
    printf("\n총합 = %d", sum);
    return 0;
}