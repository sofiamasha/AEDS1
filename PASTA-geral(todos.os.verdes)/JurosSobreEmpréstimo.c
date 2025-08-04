#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        double c, i;
        int t;
        scanf("%lf %lf %d", &c, &i, &t);

        double juros_simples = c * i * t;
        double valor_final_simples = c + juros_simples;
        double valor_final_composto = c * pow(1 + i, t);
        double juros_composto = valor_final_composto - c;
        double diferenca = fabs(valor_final_composto - valor_final_simples);

        printf("DIFERENCA DE VALOR = %.2f\n", diferenca);
        printf("JUROS SIMPLES = %.2f\n", juros_simples);
        printf("JUROS COMPOSTO = %.2f\n", juros_composto);
        printf("\n");
    }
    return 0;
}
