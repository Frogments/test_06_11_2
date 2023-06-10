#include <stdio.h>
#include <stdlib.h>

int main() {
    int min, sec;

    printf("분 초 입력:");
    scanf("%d %d", &min, &sec);

    for(;min >= 0; min--){
        for(;sec > 0; sec--){
            system("clear");
            printf("%d분 : %d초\n", min, sec);
            system("sleep 1");
        }
        sec = 60;
    }
    system("clear");
    printf("그만 튀겨!\n");
    return 0;
}