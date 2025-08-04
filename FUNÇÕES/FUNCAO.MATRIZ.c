#include <stdio.h>
#include <stdlib.h>
//mat[i] é uma linha (um ponteiro para uma sequência de colunas).
void imprime(int **mat, int linha, int coluna)
{
    int i, j;
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int l, c;

    printf("Digite o numero de linhas que vc quer: \n");
    scanf("%d", &l);

    printf("Digite o numero de colunas que vc quer: \n");
    scanf("%d", &c);


    int **mat = malloc(l * sizeof(int*));

    /*Você está dizendo:

"Quero um vetor de l ponteiros para int".

Cada mat[i] vai representar uma linha da matriz. */

    for (int i = 0; i < l; i++)
    {
        mat[i] = malloc(c * sizeof(int));
    }
    //Para cada linha i, aloca um vetor de c inteiros.




    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }


printf("Matriz digitada:\n");
    imprime(mat, l, c);

    for (int i = 0; i < l; i++)
    {
        free(mat[i]);
    }

    free(mat);
    return 0;
}
