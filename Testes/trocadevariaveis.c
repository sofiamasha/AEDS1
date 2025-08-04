/*Implemente um programa que leia dois números reais e armazene-os em duas variáveis (ex.:
A e B). Em seguida, troque dos valores das variáveis de forma que a primeira variável passe a ter
o valor da segunda, e vice-versa. Ao final, imprima os valores finais das variáveis. */
#include <stdio.h>
int main  (){
float A,B, troca;
printf("Digite dois numeros:  ");
scanf("%f %f", &A, &B);
printf("Os primeiros valores sao: %.2f e %.2f", A, B);
troca=A;
A=B;
B=troca;
printf("Os novos valores sao: %.2f e %.2f ", A, B);
return 0;
}
