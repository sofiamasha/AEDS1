#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_NUMERIC, "pt_BR.utf8"); // Define o local para a exibi��o com v�rgula como separador decimal

    float valor1, valor2, valor3, soma;
    printf("\nDigite o 1 Valor: ");
    scanf("%f", &valor1);
    printf("\nDigite o 2 Valor: ");
    scanf("%f", &valor2);
    printf("\nDigite o 3 Valor: ");
    scanf("%f", &valor3);

    soma = valor1 + valor2 + valor3;

    // Imprime a soma no formato desejado, com v�rgula no lugar do ponto
    printf("\nSoma de %.1f+%.1f+%.1f=%.1f\n", valor1, valor2, valor3, soma);

    return 0;
}

