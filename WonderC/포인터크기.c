#include <stdio.h>

double sum_num(double* pary, int size);
int main()
{
    double ary[5] = {1.0, 1.1, 1.2, 1.3, 1.4};
    int SIZE = 0; //5를 쓰지 않고 ary의 원소 개수를 대입하기
                //5가 아닌 일반적인 경우에도 성립하게 하기
    int sum = sum_num(ary, SIZE);
    double AVE = sum / 5.0; // 5라고 써있었음
    return 0;
}
double sum_num(double* pary, int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++) sum += pary + i
}