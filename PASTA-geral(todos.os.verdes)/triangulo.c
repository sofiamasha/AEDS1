
#include <stdio.h>


int main()
{
    float lado1, lado2, lado3;

    scanf(“%f %f %f”, &lado1, &lado2, &lado3);

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1)
    {
        if (lado1 == lado2 && lado2 == lado3)
        {
            printf(“equilatero\n”);
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        {
            printf(“isosceles\n”);
        }
        else
        {
            printf(“escaleno\n”);
        }
    }
    else
    {
        printf(“Triangulo invalido\n”);
    }

    return 0;
}
