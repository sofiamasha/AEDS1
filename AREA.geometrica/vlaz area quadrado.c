#include <stdio.h>
#include <math.h>

int main() {
   float lado, area;

    // Pedir ao usu�rio para inserir o lado
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);


    // Calcular a �rea do quadrado
    area =pow(lado, 2);

    // Exibir o resultado
    printf("O valor da area �: %.2f\n", area);

    return 0;
}
