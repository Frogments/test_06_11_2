#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isalnumA(char* parr);
int isalnumB(char* parr);
int isalnumA2(char* parr);
int isalnumB2(char* parr);

int main()
{
    char ch;

    printf("문자 입력: ");
    scanf("%c", &ch);

    printf("문자가 숫자인가요: %d\n", isalnumA(&ch));
    printf("문자가 알파벳인가요: %d\n", isalnumB(&ch));

    printf("문자가 숫자인가요: %d\n", isalnumA2(&ch));
    printf("문자가 알파벳인가요: %d\n", isalnumB2(&ch));

    return 0;
}

int isalnumA(char* parr)
{
    if ( isdigit(*parr) ) return 1;
    return 0;
}

// isdigit함수없이 
int isalnumA2(char* parr)
{
    if ( *parr >= 48 && *parr <= 57) return 1;
    return 0;
}

int isalnumB(char* parr)
{
    if ( isalpha(*parr) ) return 1;
    return 0;
}

// isalpha함수없이
int isalnumB2(char* parr)
{
    if ( ( *parr >= 65 && *parr <= 90 ) ||
        ( *parr >= 97 && *parr <= 122 ) ) return 1;
    
    return 0;
}