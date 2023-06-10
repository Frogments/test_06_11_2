#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main()
{
    int bomb[30], score = 0, num = 0, i;
    srand((unsigned)time(NULL));
    for (i = 0; i < 30; i++) bomb[i] = (rand() % 30) - 30;
    for (int k = 5; k > 0; k--)
    {
        system("clear");
        for (i = 0; i < 30; i++) printf("%3d", i);
        printf("\n\n");
        for (i = 0; i < 30; i++) 
        {
            if (bomb[i] > 0) printf("%3d", bomb[i]);
            else printf(" __");
        }
        printf("\n\n");
        printf("%d번 남음, 칩 개수: %d, 몇 번째 곳을 파겠습니까?:", k, score);
        scanf("%d", &num);
        if (bomb[num] >= -22)
        {
            bomb[num] += 30;
            printf("축하합니다! 칩 %d개 흭득!\n", bomb[num]);
            usleep(3000000);
            score += bomb[num];
        }
        else
        {
            printf("폭탄 터짐!!\n");
            usleep(3000000);
            break;
        }
    }
    return 0;
}