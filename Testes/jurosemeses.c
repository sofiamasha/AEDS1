/*Implemente um programa que o usuário informa o valor a ser investido, uma taxa de juros
mensal a ser aplicada ao capital, e o número de meses que irá durar a aplicação. Ao final o
programa deverá mostrar:
• O valor total acumulado ao final período.
• O valor de juros rendidos.
*/
#include<stdio.h>
int main()
{
    double valort, valor, juros, meses, rendimento;
    printf("Digite o valor a ser investido, o juros e o tempo: ");
    scanf("%lf %lf %lf", &valor, &juros, &meses);
    valort= valor*(1 + juros * meses);
    rendimento= valort - valor;
    printf("No final vc tem: %.2lf", valort);
    printf("Vc rendeu %.2lf dos seus juros.", rendimento);
    return 0;
}
