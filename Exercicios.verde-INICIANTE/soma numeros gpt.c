#include <stdio.h>

int main() {
    int num1, num2, num3, num4, soma;

    // Solicita ao usu�rio que insira quatro n�meros
    printf("Digite quatro numeros inteiros separados por espaco: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Calcula a soma dos quatro n�meros
    soma = num1 + num2 + num3 + num4;

    // Exibe o resultado da soma
    printf("A soma dos numeros eh: %d\n", soma);

    return 0;
}
