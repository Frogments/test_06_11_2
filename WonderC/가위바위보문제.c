#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int com, user;

    srand( (unsigned)time(NULL) );
    com = 2;

    printf("가위(0) 바위(1) 보(2) 선택: ");
    scanf("%d", &user);

    switch ((com - user + 2) % 3) {
        case 0:
            printf("컴퓨터가 이겼습니다.\n");
            break;
        case 1:
            printf("당신이 이겼습니다.\n");
            break;
        case 2:
            printf("비겼습니다.\n");
            break;
        default:
            printf("오류\n");
            break;
    }
}