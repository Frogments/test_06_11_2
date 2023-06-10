#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand( (unsigned)time(NULL) );
    int arr[25] = {0};
    while(1){
        for (int i = 0; i < 25; i++) {
            arr[i] = rand() % 25;
        }
        for (int jul = 0; jul < 20; jul++) {
            for (int dan = 0; dan < 25; dan++) {
                if (dan < arr[dan]) printf("ㅁ");
                else printf(" ");
            }
        printf("\n");
    }
    system("Sleep 1");
    system("cls");
    }
}