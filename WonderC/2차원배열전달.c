#include <stdio.h>
#include <string.h>

int max_num(int[][3]);
int main()
{
    int arr[2][3] = {{2,1,4},  {8,4,7}};
    int max = max_num(arr);
    printf("최댓값:%d\n", max);
}

int max_num(int arr[][3])
{
    int i, j, max = arr[0][0];
    for (i = 0; i < sizeof(arr) / 4; i++)
    {
        for (j = 0; j < sizeof(arr[3]) / 4; j++)
        {
            if (arr[i][j] > max) max = arr[i][j];
        }
    }
    return max;
}