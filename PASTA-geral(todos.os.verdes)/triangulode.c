#include <stdio.h>

void imprimirPascal(int n)
{
    int pascal[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    imprimirPascal(n);
    return 0;
}

