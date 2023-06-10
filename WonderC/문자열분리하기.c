#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Error is the discipline through which we advance!";
    char delim[] = " ,.", copy[100], *p;

    strcpy(copy, str);
    p = strtok(copy, delim);
    while (p != NULL)
    {
        printf("%s\n", p);
        p = strtok(NULL, delim);
    }
    printf(">> strtok 사용 후:%s\n", copy);
    return 0;
}