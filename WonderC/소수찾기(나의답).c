#include <stdio.h>

int main() {
    int Num, count = 3;
    printf("정수를 입력하시오: ");
    scanf("%d",&Num);

    if (Num % 2 == 0) {
        printf("%d(은)는 소수가 아닙니다.\n", Num);
        return 0;
    }

    for (int i = 3; i < Num; i += 2) {
        if (Num % i == 0 && i != Num) {
            printf("%d(은)는 소수가 아닙니다.\n", Num);
            count = 0;
            break;
        }
        count += 2;
    }

    if (count) printf("%d(은)는 소수입니다.\n", Num);

    return 0;
}