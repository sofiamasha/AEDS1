//Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas
//variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior valor do vetor.
#include <stdio.h>

void elementos(int v[], int tam, int *menor, int *maior);

int main() {
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int v[tam];
    for(int i = 0; i < tam; i++) {
        printf("Digite o %dº elemento: ", i + 1);
        scanf("%d", &v[i]);
    }

    int maior, menor;
    elementos(v, tam, &menor, &maior);

    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);

    return 0;
}

void elementos(int v[], int tam, int *menor, int *maior) {
    *maior = v[0];
    *menor = v[0];

    for(int i = 1; i < tam; i++) {
        if(v[i] < *menor) {
            *menor = v[i];
        }
        if(v[i] > *maior) {
            *maior = v[i];
        }
    }
}
