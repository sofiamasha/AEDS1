//02 - Criar um programa que leia um número inteiro entre 1 e 7 e escreva o dia da semana correspondente. Caso o usuário digite
//um número fora desse intervalo, deverá aparecer uma mensagem informando que não existe dia da semana com esse número.
#include <stdio.h>
int main(){
int i=1;

while (i!=-1){
printf("Digite um numero de 1 a 7: ");
scanf("%d", &i);
switch (i){
case 1:
    printf("SEgunda\n");
    break;
    case 2:
    printf("Terca\n");
    break;
    case 3:
    printf("Quarta\n");
    break;
    case 4:
    printf("Quinta\n");
    break;
    case 5:
    printf("Sexta\n");
    break;
    case 6:
    printf("Sabado\n");
    break;
        case 7:
    printf("Domingo\n");
    break;
        default:
            printf("O numero n existe");
    }
}
printf("obgd");
return 0;
}
