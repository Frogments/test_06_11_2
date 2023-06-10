#include <stdio.h>
#include <stdlib.h>

int main() {
    int min, sec, limit, k;

    printf("분 초 입력:");
    scanf("%d %d", &min, &sec);

    limit = min * 60 + sec;

    for (k = limit; k > 0; k--) {
        system("sleep 0.5");
        system("clear");
        printf("%d분 : %d초\n", min, --sec);
        if (sec <= 0) {
            sec = 60;
            min--;
        }
    }
    system("clear");
    printf("그만 튀겨!\n");
    return 0;
}