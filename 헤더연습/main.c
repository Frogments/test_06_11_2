#include <stdio.h>
#include "calcul.h"
int main()
{
    int a, b;
    char c;
    printf("수식 입력(종료 Ctrl + Z) :");
    scanf(" %d %c %d", &a, &c, &b);
    if (cal(a,b,c) != -1)
    {
        printf("%d %c %d = %d", a, c, b, cal(a,b,c));
        return 0;
    }
    printf("잘못 값을 입력했습니다.\n");
    return 0;
}