#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char ch[] = "Hello";
    char *p = ch;

    while (*p != '\0')
    {
        system("clear");
        usleep(500000);
        printf("%c", *p++);
        fflush(stdout);
        usleep(500000);
        // usleep(1)은 1/1000000 초 동안 멈춤
    }
}