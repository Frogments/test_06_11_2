#include <stdio.h>

int main() {
    int person, order;

    printf("사람 수 입력:");
    scanf("%d", &person);

    order = person / 4;
    order = order + (person % 4 != 0);

    printf("주문할 피자 개수:%d\n", order);

    return 0;
}