#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("Nao existem raizes reais\n");
    }
}

