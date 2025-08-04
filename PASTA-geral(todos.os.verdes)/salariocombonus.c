#include <stdio.h>
int main ()
{
    char nome[20];
    double salario, comissao,total;
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &comissao);
    total=salario+(comissao*0.15);
    printf("TOTAL = R$ %.2lf ", total);
    return 0;
}
