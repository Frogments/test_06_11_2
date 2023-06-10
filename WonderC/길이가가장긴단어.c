#include <stdio.h>

int main()
{
    int ch;
    int cnt = 0, max = 0;

    int i = 0;
    while (1) 
    {
        ch = getchar();
        if (ch == 90) break;

        while (ch != '\n')
        {
            cnt++;
            ch = getchar();
        }

        if (cnt > max) max = cnt;
        cnt = 0;

        ch = 0;
    }

    printf("가장 길이가 긴 단어의 길이: %d", max);
    return 0;
}