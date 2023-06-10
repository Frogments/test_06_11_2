#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int prob(int max) {
    int pnum, k;

    pnum = rand() % (max * max * 60);
    for (k = 0; k <= max; k++)
        if (pnum <= k * k * 60)
            return k;
};

int main() {
    char rule[8][11] = {"stple:0", "4card:1", "fhouse:2", "flush:3",
                        "straight:4", "triple:5","2pair:6", "1pair:7"};
    int com[2], user[2], chip = 10, bet, k;

    srand( (unsigned)time(NULL));
    while(1) {
        com[0] = rand() % 13 + 1;
        user[0] = rand() % 13 + 1;
        com[1] = prob(7);
        user[1] = prob(7);
        printf("\nyou = [%d] %s", user[0], rule[user[1]]);
        printf("\tchip = %d 배팅(0은 포기): ", chip);
        scanf("%d", &bet);
        printf("com = [%d] %s\n", com[0], rule[com[1]]);

        if (bet <= 0 || bet > chip) continue;
        if (com[1] < user[1] || (com[1] == user[1] && com[0] > user[0])) {
            chip -= bet;
            printf("\t\t\t컴퓨터 승! chip = %d\n", chip);
        } else {
            chip += bet;
            printf("\t\t\t사용자 승! chip = %d\n", chip);
        }
        if (chip <= 0 || chip >= 100) break;
    }
    return 0;
}