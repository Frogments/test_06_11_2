#include <stdio.h>

int main()
{
    double grade0 = 0.0;
    double grade = 4.5;
    printf("%u\n", &grade0);
    printf("%u\n", &grade); //28
    double *pg = &grade; // 20
    double **ppg = &pg; // 12
    printf("%.1lf\n", **ppg);
    printf("%u\n", &ppg);
    printf("%u\n", *&pg);
    printf("%u\n", *ppg);
    printf("%u\n", &*ppg);
}