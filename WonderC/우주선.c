#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b;
    for (a = 0; a <= 26; a++) {
        system("clear");
        for (b = 0; b <= a; b++) {
            printf(" ");
        }
        (a % 2) ? printf("<#=#>") : printf(" <#=#>");
        system("sleep 1");
    }
}