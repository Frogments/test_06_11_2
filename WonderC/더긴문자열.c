#include <stdio.h>
#include <string.h>

char* bigStr(char* str1, char* str2);

int main()
{
    char str1[] = "C Programming";
    char str2[] = "Java Program";

    char* pa = bigStr(str1, str2);
    printf("길이가 더 긴 문자열: %s", pa);
}

char* bigStr(char* str1, char* str2)
{
    int num1 = 0, num2 = 0, i = 0, j = 0;
    while (str1[i++] != '\0') num1++;
    while (str2[j++] != '\0') num2++;

    if (num1 > num2) return str1;
    else if (num1 < num2) return str2;
    else return "equal";
}