#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[20] = "";
    char str2[10] = "Love You";
    char str3[10] = "So Much!";

    strcpy(str1, str2);
    printf("%s:%lu\n", str1, strlen(str1));
    strncat(str1, " ", strlen(str1) + 1);
    printf("%s:%lu\n", str1, strlen(str1));
    strncat(str1, str3, 7);
    printf("%s:%lu\n", str1, strlen(str1));
    return 0;
}