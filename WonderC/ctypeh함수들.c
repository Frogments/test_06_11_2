#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'a';

    printf("toupper = %c\n", toupper(ch));
    printf("tolower = %c\n", tolower(ch));
    printf("toascii = %d\n", toascii(ch));
    printf("islower = %d\n", islower(ch));
    printf("isupper = %d\n", isupper(ch));
    printf("isalpha = %d\n", isalpha(ch));
    printf("isdigit = %d\n", isdigit(ch));
    printf("isalnum = %d\n", isalnum(ch));
    printf("isspace = %d\n", isspace(ch));
    printf("ispunct = %d\n", ispunct(ch));
    printf("iscntrl = %d\n", iscntrl(ch));
    printf("isprint = %d\n", isprint(ch));
    printf("isxdigit = %d\n", isxdigit(ch));

    return 0;
}