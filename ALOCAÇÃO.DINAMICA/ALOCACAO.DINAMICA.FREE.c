#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Liberar memoria alocada com FREE
//Programa com muitas variaveis, precisa limpar pq elas ocupam espaço de memoria desnecessario
//No final do programa, ou quando vc n precisa mais da memoria(o vet), vc poe o free(libera memoria)
//Recebe como parametro: Ponteiro que quero liberar

int main(){
int i, tam, *vet;

printf("Digite o tamanho do vetor: ");
scanf("%d", &tam);
 srand(time(NULL)); // para gerar números aleatórios diferentes a cada execução
 vet = malloc(tam * sizeof(int));
if (vet) {
        for (i = 0; i < tam; i++) {
            *(vet + i) = rand() % 100;
            // *(vet + i) é aritmética de ponteiros
            // parenteses para fazer primeiro vet + i, depois acessar o valor com *
            // rand() % 100 gera um número aleatório entre 0 e 99
        }

        // imprime vetor original
        for (i = 0; i < tam; i++) {
            printf("%d ", *(vet + i));
        }

        // agora vamos pedir o novo tamanho do vetor
        int novoTam;
        printf("\n\nDigite o NOVO tamanho do vetor: ");
        scanf("%d", &novoTam);

        // realloc recebe dois parâmetros: ponteiro original e novo tamanho total em bytes
        vet = realloc(vet, novoTam * sizeof(int));
        // realloc tenta redimensionar a memória e retorna um novo ponteiro

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
            printf("Erro ao realocar memória\n");
        }

    } else {
        printf("Erro ao alocar memória\n");
    }

    free(vet);

    return 0;
}
