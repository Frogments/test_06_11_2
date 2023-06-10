#include <stdio.h>
#include <stdlib.h>

int main() {
    int pos = 0, ch, k, line = 0;

    printf('*');
    while ((ch = getch()) != 'q')
    {
        if (ch == '1' && pos > 0) pos--;
        if (ch == '4' && pos < 81) pos++;
        if (ch == '3' && line < 20) line++;
        if (ch == '2' && line > 0) line--;
        system("clear");
        for (k = 0; k < line; k++) printf("\n");
        for(k = 0; k < pos; k++) printf(" ");
        printf("*");
    }

    return 0;
}