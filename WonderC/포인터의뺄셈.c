#include <stdio.h>

int main()
{
    double pa[5] = {1.1, 1.2, 1.3, 1.4, 1.5};

    double *arr = pa;
    double *arr2 = pa + 2;

    printf("arr2 - arr1 : %ld", arr2 - arr);
}