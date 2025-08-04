#include <stdio.h>
#include <math.h>
int main ()
{
    double a,b,c,x1,x2,delta;
    scanf("%lf %lf %lf",&a,&b,&c);

    delta = (b*b) - (4*a*c);
    x1 = ((-1 * b) + sqrt(delta)) / ( 2 * a);
    x2 = ((-1 * b) - sqrt(delta)) / ( 2 * a);

    if ( delta >= 0)
    {
        printf("%.0lf %.0lf",x2,x1);
    }
    else
    {
        printf("Nao existem raizes reais");
    }
}
