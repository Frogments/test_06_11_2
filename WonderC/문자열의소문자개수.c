#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch;
    int cnt = 0;
    ch = getchar();
    while (ch != '\n')
    {
        if ( islower(ch) ) cnt++;
        ch = getchar();
    }
    printf("소문자의 개수 : %d\n", cnt);
    return 0;
}