#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    start = clock();
    register int i;
    auto int sum = 0;

    for (i = 1; i <= 10000; i++)
    {
        sum += i;
    }
    end = clock();
    printf("걸린 시간 : %f\n",(double) (end - start) / CLOCKS_PER_SEC);
    printf("%d\n", sum);

    return 0;
}