#include <stdio.h>

int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept)
{
    if (x1 == x2) return -1;
    else {
        *slope = (float)(y2-y1) / (float)(x2 - x1);
        *yintercept = y1 - (*slope) * x1;
        return 0;
    }
}

int main(void)
{
    float slope, yintercept;
    if (get_line_parameter(3,4,6,6,&slope,&yintercept) == -1)
    printf("에러\n");
    else
    printf("기울기는 %f, y절편은 %f\n", slope, yintercept);
    return 0;
}