#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int numeros[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &numeros[i]);
    }

    int soma = 0;

    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            soma += numeros[i];
        }
        else
        {
            soma -= numeros[i];
        }
    }

    printf("%d\n", soma);

    return 0;
}
