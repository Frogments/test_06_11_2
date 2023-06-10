#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *arr2;
    arr2 = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
        printf("%x\n", arr2 + i);
    *(arr2 + 0) = 1;
    *(arr2 + 1) = 2;
    *(arr2 + 2) = 3;
    *(arr2 + 3) = 4;
    *(arr2 + 4) = 5;
}