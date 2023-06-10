#include <stdio.h>
int main() {
    char str[100];
    int i = 0;

    printf("글자 수가 100이하인 문장 입력: ");
    gets(str);
    while (str[i] != '\0') i++; //입력한 글자 수를 i에 저장

    printf("역순으로 출력하면 : ");
    for (; i > 0; i--) {
        printf("%c", str[i - 1]);
        //i-1 번째의 문자부터 0번째 문자까지 순서대로 출력
    }
    printf("\n2023182034 조기성\n");
    return 0;
}
// 2023182034 조기성