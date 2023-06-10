#include <stdio.h>

int main()  {
    int k = 1;
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 4; j++) {
            printf("%d\n", k++);
            if (j == 3) break;
        }
    }
    return 0;
}