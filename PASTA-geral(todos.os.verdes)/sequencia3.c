#include <stdio.h>

int main()
{
    int N;
    double soma = 1.0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        double fatorial = 1;
        for (int j = 1; j <= i; j++)
        {
            fatorial = fatorial * j;
        }
        soma = soma + 1 / fatorial;
    }

    printf("%.2f\n", soma);

    return 0;
}
