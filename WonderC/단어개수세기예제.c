#include <stdio.h> 
#include <ctype.h>
int count_word(char *s); 
int main( void )
{
    int wc = count_word("Hi my name is"); 
    printf("단어의 개수: %d \n", wc);
    return 0; 
}

int count_word( char* s)
{
    int i, wc = 0, wait = 1;

    for (i = 0; s[i] != '\0'; ++i)
    {
        if (isalpha(s[i])){
            if (wait)
            {
                 wc++;
                 wait = 0;
            }
        }
        else
        {
            wait = 1;
        }
    }

    return wc;
}