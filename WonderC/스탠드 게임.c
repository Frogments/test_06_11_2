#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand( (unsigned)time(NULL) );
    int user_points = 10, user_card, com_card, user_choice;

    printf("스탠드 게임을 시작합니다...\n");

    for (int i = 0; i < 5; i++) {
        printf("현재 %d판째.. %d판 후 게임이 끝납니다.\n", i+1, 4-i);
        system("timeout 1 > NULL");
        user_card = rand() % 10 + 1;
        com_card = rand() % 10 + 1;

        printf("당신의 카드 숫자는 %d이고, 현재 칩 개수는 %d개 입니다.\n", user_card, user_points);
        printf("몇 개를 베팅하시겠습니까? :");
        scanf("%d", &user_choice);

        if (user_card >= com_card) {
            printf("당신이 이겼습니다!!\n");
            user_points += user_choice;
            printf("칩 개수가 %d개가 되었습니다.", user_points);
        } else {
            printf("졌습니다...\n");
            user_points -= user_choice;
            printf("칩 개수가 %d개가 되었습니다.", user_points);
            if (user_points <= 0) printf("칩이 다 떨어졌습니다.");
        }
    }
    printf("게임이 끝났습니다. 당신의 칩 개수는 %d개 입니다.\n", user_points);

}