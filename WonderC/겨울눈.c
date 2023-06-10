#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

#define WTH 118
#define HGT 26

int main()
{
    int k, jul, met, snow[WTH], sine[WTH], l, *p = snow;

    for (met = 0; met < WTH; met++)
    {
        *p++ = rand() % HGT - HGT;
        sine[met] = sin(met) * 3 + 1;
    }
    for (k = 0; k < HGT * 2; k++)
    {
        system("clear");
        for (p = snow, met = 0; met < WTH; met++, *p++)
            if (*p < HGT - 1) (*p)++;
        for (jul = 0; jul < HGT; jul++) 
        {
            for (l = 0; l < sine[jul]; l++) printf(" ");
            for (p = snow, met = 0; met < WTH; met++)
            {
                if (*p++ == jul) printf("*");
                else printf(" ");
            }
            printf("\n");
        }
        usleep(300000);
    }
}