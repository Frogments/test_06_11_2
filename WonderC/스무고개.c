#include <stdio.h>

void binary_search(int list[], int n)
{
    int user_num = 3;
    int low, high, middle, count=0;
    low = 0;
    high = n-1;

    while (user_num != 0) {
        count++;
        middle = (low + high) / 2;
        printf("시도횟수 %d\n", count);
        printf("%d 맞습니까? : ", middle);
        scanf("%d", &user_num);
        if (user_num == 0) printf("브라보!\n");
        else if (user_num == 1) low = middle + 1;
        else if (user_num == -1) high = middle -1;

    }
}

int main() {
    int list[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    printf("1 - 20 중 아무 숫자나 생각하시오\n");
    binary_search(list, 20);
    return 0;
}