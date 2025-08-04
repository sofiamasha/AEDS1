#include <stdio.h>
// recebe dois numeros e retorna o maior
float Maior(float num1, float num2){ // recebe dois numeros separados por virguala
if (num1>num2){
return num1;
} else {
 return num2;
} // so foi definida, n executada
}
int main(){
float x,y,m;
printf("Insira um valor: \n");
scanf("%f", &x);

printf("Insira mais um valor: \n");
scanf("%f", &y);
m=Maior(x,y); //chamo funcao, codigo volta la pra cima
//valor de x é copiado pra num1
// quando a funcao retorna o odigo volta pra main
//resultado atribuído a m
printf("Maior: %.2f\n", m);
return 0;
}
