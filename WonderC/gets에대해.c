#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100];
    char p;
    printf("문자열 입력:");
    gets(arr);  // 남아있는 개행문자 버퍼 지워줌
    scanf("%c", &p);
    printf("%s%c", arr, p);
    return 0;
}