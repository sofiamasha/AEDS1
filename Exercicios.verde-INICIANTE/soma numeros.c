// declare n1,n2,n3,n4, soma NUMERICO
// LEIA n1,n2,n3,n4
// soma - n1_n2+n3_n4
// Escreve soma
#include <stdio.h>
#include <math.h>
int main (){
int num1, num2, num3, num4, soma;
printf ("Digite os quatro numeros e separe-os com virgula: ");
scanf ("%d, %d, %d, %d", &num1, &num2, &num3, &num4);
soma= num1+num2+num3+num4;
printf("A soma dos numeros e: %d\n", soma);
return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
   int lado, area;

    // Pedir ao usuário para inserir o lado
    printf("Digite o lado do quadrado: ");
    scanf("%d", &lado);


    // Calcular a área do quadrado
    area =pow(lado, 2);

    // Exibir o resultado
    printf("O valor da area é: %d", area);

    return 0;
}
