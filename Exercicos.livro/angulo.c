#include<stdio.h>
#include<math.h>

int main (){
    double angulo, altura, escada;

    // Solicita o valor do �ngulo e da altura
    printf("Digite o valor do angulo (em graus): ");
    scanf("%lf", &angulo);
    printf("Digite a altura da parede: ");
    scanf("%lf", &altura);

    // Converte o �ngulo de graus para radianos
    double radiano = angulo * M_PI / 180.0;  // M_PI � uma constante da biblioteca math.h

    // Calcula o comprimento da escada usando a f�rmula
    escada = altura / sin(radiano);

    // Exibe o resultado
    printf("A medida da escada e: %.2lf\n", escada);

    return 0;
}
