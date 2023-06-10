#include <stdio.h>
#include <ctype.h>

int count_word(char *s);
int main()
{
    int wc = count_word("Hi my name is");
    printf("단어의 개수: %d\n", wc);
}

int count_word(char *s)
{
    int cnt = 1, i = 0;
    while (1) {
        if (s[i] == ' ') cnt++;
        else if (s[i] == '\n') return cnt - 2;
        i++;
    }
}