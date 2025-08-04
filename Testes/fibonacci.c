#include <stdio.h>

int main() {
    int inicio = 1, fim = 100, meio, tentativas, numero;
    char resposta;

    printf("Pense em um numero de %d a %d\n", inicio, fim);
    while (1) {
        if (numero < 1) {
            printf("Programa encerrado.\n");
            break;
        }

        inicio = 1;
        fim = 100;
        tentativas = 0;

        while (inicio <= fim) {
            tentativas++;
            meio = (inicio + fim) / 2;
            printf("O numero >, < ou = %d? ", meio);
            scanf(" %c", &resposta);

            if (resposta == '=') {
                printf("Adivinhei o numero %d em %d tentativas!\n", meio, tentativas);
                break;
            } else if (resposta == '>') {
                inicio = meio + 1;
            } else if (resposta == '<') {
                fim = meio - 1;
            }
        }
    }
    return 0;
}
