#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char ch = 'a';

    toupper(ch);
    printf("%c\n", ch);

    tolower(ch);
    printf("%c\n", ch);

    printf("%d\n", toascii(ch));

    if (islower(ch) == 0) printf("%c\n", ch);

    return 0;
}