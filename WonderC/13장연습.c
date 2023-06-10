#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpr = NULL, *fpw = NULL;
    fpr = fopen("test.bin", "rb");
    fpw = fopen("test_2.txt", "w");
    while (feof(fpr) == 0)
    {
        fputc(fpw, fpr);
    }
    return 0;
}