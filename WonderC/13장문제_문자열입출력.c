#include <stdio.h>

void get_info(FILE* fp, char[50], char[20]);

int main()
{
    FILE *fp;
    char str[100];
    fp = fopen("mystory.txt", "a");
    if (fp == NULL)
    {
        printf("파일 생성실패\n");
        return 0;
    }
    
    get_info(fp, str, "즐겨먹는 음식");
    get_info(fp, str, "취미");
    return 0;
}

void get_info(FILE* fp, char str[50], char info[20])
{
    fputc('#',fp);
    fputs(info, fp);
    fputc(':', fp);
    printf("%s을(를) 입력해주세요:", info);
    scanf(" %s", str);
    fputs(str, fp);
    fputc('\n', fp);
}