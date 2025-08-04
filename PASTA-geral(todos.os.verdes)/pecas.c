#include <stdio.h>

int main()
{
    double codigo1, num1, valor1, tt1;
    double codigo2, num2, valor2, tt2;
    double total;
    scanf("%lf %lf %lf", &codigo1, &num1, &valor1);
    scanf("%lf %lf %lf", &codigo2, &num2, &valor2);
    tt1=num1*valor1;
    tt2=num2*valor2;
    total=tt1+tt2;
    printf("VALOR A PAGAR: R$ %.2lf",total);
    return 0;
}
