#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    printf("글자 수가 100이하인 문장 입력: ");
    gets(str);
    while (str[i] != '\0') i++;
    printf("%d", i);
}