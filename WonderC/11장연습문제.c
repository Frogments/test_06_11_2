#include <stdio.h>

int main()
{
    char ani[20], why[80];
    printf("좋아하는 동물: ");
    scanf("%s", ani);
    while( getchar() != '\n');
    printf("좋아하는 이유: ");
    fgets(why, sizeof(why), stdin);
    printf("%s is %s", ani, why);

    return 0;
}