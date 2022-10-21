#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    double x, y;
  
    printf("Enter x:");
    scanf("%lf", &x);
    if( x>= -3 && x < 0)
    y = abs(x+4)-abs(pow(x,3)-4);
    else if ( x >= 9 && x < 15 )
    y = 2*x;
    else if ( x >= 27 && x < 50 )
    y = x/(pow(cos(x),2)+1);
    else
    y = x/4+(sin(x)/3);
    system("cls");
    printf("x = %lf", x);
    printf("\ny = %lf", y);
    scanf("%d",y);
     return 0;
 
}