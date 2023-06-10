#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Love You So Much!";
    char str2[10] = "Love you", *p;
    int st;

    st = strcmp(str1, str2);
    printf("str1과 str2 비교:%d\n", st);
    st = strncmp(str1, str2, 5);
    printf("앞에서 5글자 비교:%d\n", st);

    //찾으면 그 인덱스의 주소값, 없으면 NULL
    p = strchr(str1, 'v');
    if (p != NULL) printf("%s\n", p);
    else printf("찾는 문자가 없네요!\n");

    p = strstr(str1, "so");
    if (p != NULL) printf("%s\n", p);
    else printf("찾는 문자열이 없네요!\n");

    return 0;
}