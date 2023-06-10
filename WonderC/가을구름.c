#include <stdio.h>
#include <stdlib.h>

int main() {
    int pos[26], spd[26], met, k, jul;
    char str[6];

    for (jul = 0; jul < 26; jul++) {
        pos[jul] = -24;
        spd[jul] = rand() % 10 + 3;
    }
    for (k = 0; k < 100; k++) {
        system("clear");
        for (jul = 0; jul < 26; jul++) {
            pos[jul] = pos[jul] + spd[jul]; // 구름 위치 값 증가
            if (pos[jul] > 115) {           // 구름이 화면을 벗어나면
                pos[jul] = -22;
                spd[jul] = rand() % 20 + 3;
            }
            for (met = 0; met < 5; met++)
                str[met] = rand() % 9 + 64;     //@ABCDEFGH 중 무작위 5글자
            str[5] = '\0';                      // str[5]에 널 문자 저장
            for (met = 0; met < 5; met++) {    
                if (pos[jul] == met) printf("%s", str);     
                else printf(" ");
            }
            printf("\n");
        }
        system("Sleep 1");
    }
    return 0;
}
