#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int rain[60] = {0}, k, jul, met;

    for (met = 0; met < 60; met++) rain[met] = met % 27;
    for (k = 0; k < 200; k++)
    {
        system("clear");
        for (met = 0; met < 60; met++)
        {
            if (met % 2)
            {
                if (rain[met] < 26) rain[met]++;
                else rain[met] = 0;
            }           
            else
            {
                if (rain[met] > 0) rain[met]--;
                else rain[met] = 26;
            }
        }
        for (jul = 0; jul < 26; jul++)
        {
            for (met = 0; met < 60; met++)
            {
                if (rain[met] == jul) printf("<>");
                else printf(" ");
            }
            printf("\n");
        }
        usleep(300000);
    }
    return 0;
}