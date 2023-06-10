#include <math.h> 
#include <stdio.h>
int main( void ) 
{
    double pi = 3.1415926535; 
    double x, y;
    x = pi / 2;
    y = sin( x );
    printf( "sin( %f ) = %f\n", x, y ); 
    y = cos( x );
    printf( "cos( %f ) = %f\n", x, y );
}