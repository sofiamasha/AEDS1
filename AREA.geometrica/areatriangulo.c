#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite o valor da base:\n");
    scanf("%f", &base);

    printf("\nDigite o valor da altura:\n");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("\nArea do triângulo = %.2f\n", area);


}
