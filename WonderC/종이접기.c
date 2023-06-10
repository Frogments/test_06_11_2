#include <stdio.h>

int main() {
    double paper = 1.0;
    int i = 1;
    while (paper > 0.01) {
        printf("%d번 접음\n", i++);
        paper /= 2;
        printf("paper : %.5lf\n", paper);
    }
    printf("%d번 접으면 종이가 원래 크기의 1/100 이하가 됨", i-1);
    return 0;
}