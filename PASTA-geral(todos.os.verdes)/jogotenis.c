#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int niveis[] = {a, b, c, d};
    int somaTotal = a + b + c + d;
    int menorDiferenca = -1;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            int somaTime1 = niveis[i] + niveis[j];
            int somaTime2 = somaTotal - somaTime1;
            int diferenca = (somaTime1 - somaTime2);
            if (diferenca < 0)
            {
                diferenca = -diferenca;
            }

            if (menorDiferenca == -1 || diferenca < menorDiferenca)
            {
                menorDiferenca = diferenca;
            }
        }
    }

    printf("%d\n", menorDiferenca);

    return 0;
}
