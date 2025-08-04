#include <stdio.h>
int main ()
{
    int valor;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidade_notas;

    scanf("%d", &valor);

    printf("%d\n", valor);

    for (int i = 0; i < 7; i++)
    {
        quantidade_notas = valor / notas[i];
        printf("%d nota(s) de R$ %d,00\n", quantidade_notas, notas[i]);
        valor %= notas[i];
    }
    return 0;
}
