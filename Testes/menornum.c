#include<stdio.h>
int main (){
int i,valor, menor;
menor=valor;
while(1){
printf("Digite um valor: ");
scanf("%d", &valor);
 if (valor==-1){
break;
}
if(valor<menor){
menor=valor;
}
}
printf("\n O menor numero eh %d", menor);
return 0;
}
