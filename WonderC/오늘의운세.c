// 사용자가 1에서 20까지의 숫자 중 하나를 고른다.
// 20번 무작위 수를 만들어 몇 번 만에 사용자가 고른 숫자가 나오는 지를 확인한다.
// 시작 점수는 60만점

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user_num, com_num, count = 0;
    srand( (unsigned)time(NULL) );
    printf("오늘의 운세 1-20 선택: ");
    scanf("%d", &user_num);

    for (int i = 1; i <= 20; i++) {
        com_num = rand() % 20 + 1;
        count++;
        if (user_num == com_num){
            break;
        } else {
            printf("행운 수 %d 시행 수 %d\n", 
            com_num, i);
        }
    }
    if (count <= 5) printf("\n오늘은 행운의 날\n");
    else printf("\n오늘은 조심하세요!\n");

    return 0;
}