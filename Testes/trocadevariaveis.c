/*Implemente um programa que leia dois n�meros reais e armazene-os em duas vari�veis (ex.:
A e B). Em seguida, troque dos valores das vari�veis de forma que a primeira vari�vel passe a ter
o valor da segunda, e vice-versa. Ao final, imprima os valores finais das vari�veis. */
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
