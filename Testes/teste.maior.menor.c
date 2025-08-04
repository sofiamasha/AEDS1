//Escreva um procedimento que troca os valores dos parâmetros recebidos. Sua assinatura deve
//ser: void troca(float *a, float *b);
#include <stdio.h>
void troca(float *a, float *b);
int main(){
float c,d;
printf("Digite um numero: \n");
scanf("%f", &c);
printf("Digite um numero: ");
scanf("%f", &d);

printf("Antes da troca: c=%.2f e d=%.2f", c,d);

troca(&c,&d);

printf("Depois da troca: c=%.2f e d=%.2f", c,d);
return 0;
}



void troca(float *a, float *b){
float temp;
temp=*a;
*a=*b;
*b=temp;

}
