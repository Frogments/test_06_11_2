#ifndef __CALCUL_H__
#define __CALCUL_H__

int cal(int a, int b, char o)
{
    switch (o)
    {
        case '+' : return a + b;
        case '-' : return a - b;
        case '*' : return a * b;
        case '/' : 
        {
            if (b != 0) return a / b;
            else return -1;
        }
        default : return -1;
    }
}

#endif