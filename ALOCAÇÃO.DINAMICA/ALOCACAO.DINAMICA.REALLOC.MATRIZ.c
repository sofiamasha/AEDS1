#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Realloc: aloca uma nova regi�o de mem�ria,
// copia o conte�do da anterior para a nova regi�o
// e retorna o novo PONTEIRO � d� a sensa��o de aumentar o tamanho do vetor

int main() {
    int i, tam, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam); // quero alocar pra essa quantidade aqui
    srand(time(NULL)); // para gerar n�meros aleat�rios diferentes a cada execu��o

    vet = malloc(tam * sizeof(int)); // pra pegar a quantidade de inteiros que quero
    // malloc retorna um ponteiro para a regi�o de mem�ria alocada
    // sizeof(int) garante que alocaremos espa�o para inteiros

    if (vet) {
        for (i = 0; i < tam; i++) {
            *(vet + i) = rand() % 100;
            // *(vet + i) � aritm�tica de ponteiros
            // parenteses para fazer primeiro vet + i, depois acessar o valor com *
            // rand() % 100 gera um n�mero aleat�rio entre 0 e 99
        }

        // imprime vetor original
        for (i = 0; i < tam; i++) {
            printf("%d ", *(vet + i));
        }

        // agora vamos pedir o novo tamanho do vetor
        int novoTam;
        printf("\n\nDigite o NOVO tamanho do vetor: ");
        scanf("%d", &novoTam);

        // realloc recebe dois par�metros: ponteiro original e novo tamanho total em bytes
        vet = realloc(vet, novoTam * sizeof(int));
        // realloc tenta redimensionar a mem�ria e retorna um novo ponteiro

        if (vet) {
            if (novoTam > tam) {
                // se o novo tamanho for maior, preenche o restante com novos valores
                for (i = tam; i < novoTam; i++) {
                    *(vet + i) = rand() % 100;
                }
            }

            printf("\nVetor realocado:\n");
            for (i = 0; i < novoTam; i++) {
                printf("%d ", *(vet + i));
            }

        } else {
            printf("Erro ao realocar mem�ria\n");
        }

    } else {
        printf("Erro ao alocar mem�ria\n");
    }

    return 0;
}
