#include <stdio.h>

int main() {
    char str[80];
    int cnt = 0;
    printf("문장 입력: ");
    gets(str);
    cnt = conv(str);
    printf("바뀐 문장: %s\n", str);
    printf("바뀐 문자 수: %d\n", cnt);
    return 0;
}