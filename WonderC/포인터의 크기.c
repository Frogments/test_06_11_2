#include <stdio.h> 
int main(void)
{
int i = 10;
double f = 12.3;
int *pi;
double *pf;
pi = &i;
pf = &f;
printf("%d %u %u \n", sizeof(pi), pi, &i); 
printf("%d %u %u \n", sizeof(pf), pf, &f); 
return 0;
}