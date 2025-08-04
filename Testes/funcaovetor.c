#include <stdio.h>
#include <stdlib.h>

// fun��o que imprime o vetor
void ImprimeVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;

    // Pergunta o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
//100 = 400
    // Aloca dinamicamente o vetor com o tamanho n
    int *v = malloc(n * sizeof(int));


    // Preenche o vetor
    for (int i = 0; i < n; i++) {
        printf("Digite o valor para a posi��o %d: ", i);
        scanf("%d", &v[i]);
    }
    //falo quanto vale cada posicao

    // Chama a fun��o para imprimir
    ImprimeVetor(v, n);

    // Libera a mem�ria
    free(v);

    return 0;
}
