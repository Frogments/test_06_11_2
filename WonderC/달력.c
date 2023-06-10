#include <stdio.h>

int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
void print_month(int* mp)
{
    int i;
    for(i = 0; i < 12; i++)
    {
        printf("%5d", *mp++);
        if (i % 5 == 4) putchar('\n');
    }
}

int main()
{
    print_month(month);
    return 0;
}