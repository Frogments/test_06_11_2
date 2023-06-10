#include <stdio.h>
#include <stdlib.h> // 동적 메모리 함수가 들어 있는 헤더
int main()
{
    int max, add, k;
    double *dmp, sum = 0.0;

    printf("입력하는 숫자의 개수: ");
    scanf("%d", &max);
    dmp = (double *)calloc(max, sizeof(double));

    printf("%d개 값을 입력: ", max);
    for (k = 0; k < max; k++)
    {
        scanf("%lf", &dmp[k]);
        sum += dmp[k];
    }
    printf("추가 숫자의 개수 입력:");
    scanf("%d", &add);
    dmp = realloc(dmp, sizeof(double) * (max + add));

    printf("추가하는 %d개 숫자의 갑 입력:");
    for (k = 0; k < add; k++)
    {
        scanf("%lf", &dmp[k+max]);
        sum += dmp[k+max];
    }
    free(dmp);
    printf("평균 = %.1lf", sum / (max + add));
    return 0;
}