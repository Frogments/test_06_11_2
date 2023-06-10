//2023182034 조기성
#include <stdio.h>
#include <string.h>

void move_text(FILE *fp, char[][20]);
void cmp_text(FILE *fp, char a_txt[][20], char b_txt[][20]);
void print_text(FILE *fp);

int main()
{
    printf("2023182034 조기성\n");

    //a.txt에 단어 쓰기
    FILE *fp1 = fopen("a.txt", "w");
    fputs("dog\ntiger\nhorse\nmonkey\nlion\nkoala\ngiraffe\nowl", fp1);
    fclose(fp1);

    //b.txt에 단어 쓰기
    FILE *fp2 = fopen("b.txt", "w");
    fputs("lion\nelephant\npear\ndog\ntiger\napple\nkangaroo\norange\nbear\nowl", fp2);
    fclose(fp2);

    FILE *fpa = fopen("a.txt", "r");
    FILE *fpb = fopen("b.txt", "r");
    FILE *fpc = fopen("c.txt", "w+");
    char a_txt[10][20] = {'\0'};
    char b_txt[10][20] = {'\0'};

    //텍스트를 배열에 옮기고 비교해서
    //b.txt에만 있는 단어를 c.txt에 옮기고 출력
    move_text(fpa, a_txt);
    move_text(fpb, b_txt);
    cmp_text(fpc, a_txt, b_txt);
    print_text(fpc);
    
    fclose(fp1);
    fclose(fp2);
    fclose(fpa);
    fclose(fpb);
    fclose(fpc);
    return 0;
}

//파일의 문자들을 형식에 맞게 char배열에 넘겨줌
void move_text(FILE *fp, char copy[][20])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 20; j++)
        {
            if (feof(fp)) break;
            copy[i][j] = fgetc(fp);
            if (copy[i][j] == '\n') break;
        }
        if (feof(fp)) break;
    }
    copy[i][j-1] = '\0';
}

//b_txt에만 있는 단어를 c_txt에 저장
void cmp_text(FILE *fp,char a_txt[][20], char b_txt[][20])
{
    int i, j, count = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (strcmp(b_txt[i], a_txt[j]) == 0) count++;
        }
        if (count == 0) 
        {
            printf("%s", b_txt[i]);
            fputs(b_txt[i], fp);
        }
        count = 0;
    }
}

//텍스트파일을 출력
void print_text(FILE *fp)
{
    int ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
}