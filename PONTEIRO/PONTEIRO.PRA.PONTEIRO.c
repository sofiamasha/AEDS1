#include <stdio.h>

int main(){
int A = 10, *B, **C;//Ponteiro e ponteiro aponta PRA OUTRO PONTEIRO;

B = &A;
C=&B; //C APONTA PRA 100
//B APONTA PRA 100 E C APONTA PRA QUEM B APONTA




printf("Endereco de A: %p\t Conteudo de A: %d\n", &A, A);
printf("Endereco de B: %p\t Conteudo de B: %p\n", &B, B);
printf("Endereco de C: %p\t Conteudo de C: %p\n", &C, C);
printf("Conteudo apontado por C: %d\n", **C);
printf("Conteudo apontado por B: %d\n", *B);
return 0;
}
