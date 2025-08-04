//Teste prova 2 walisson:   PONTEIROS
#include <stdio.h>
//O QUE SERA IMPRESSO NESSES DOIS CODIGOS:

/*int main() {
    int x = 10;
    int *p = &x; //10 = 16534162
    *p = *p + 5; //10=10+5 ==15
    printf("%d\n", x);
    return 0;
}



int main(){
int f=15;
int *p = &f;
*p = *p + 18;
printf("%d\n", *p /*ou f ímprime o msm*//*);
    return 0;
}
*/


/*
Q2. Explique o que o seguinte código faz:
int a = 3, b = 7;
int *p1 = &a, *p2 = &b;

*p1 = *p1 + *p2;  // a = a + b → a = 10
p2 = p1;          // p2 agora aponta para o MESMO lugar que p1 (ou seja, para a)
*p2 = 20;         // altera o valor no endereço apontado por p2 (agora é a)

O que vale a, b, *p1 e *p2 no final?

*/

/*Q3. Escreva uma função que troque os valores de duas variáveis usando ponteiros:

void troca(int *a, int *b);*/

/*#include<stdio.h>
void troca(int *a, int *b);
int main(){
int c,d;
printf("Digite o valor de a: ");
scanf("%d", &c);
printf("Digite o valor de b: ");
scanf("%d", &d);
troca(&c,&d);
printf("Valores novos: %d, %d",c,d);
return 0;}
void troca(int *a, int *b){
int tmp;
tmp=*a;
*a=*b;
*b=tmp;
} */

/*4. O que o seguinte código imprime?
int main(){
int x = 3, y = 4;
int *p = &x;
int *q = &y;
p = q;
*p = *p + 1;
printf("%d %d", x, y);
}

Q5. Dado o código abaixo, qual a diferença entre *p++ e (*p)++?


int vet[] = {1, 2, 3};
int *p = vet;
*/
