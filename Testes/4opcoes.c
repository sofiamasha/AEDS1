#include <stdio.h>
#include <math.h>

int main() {
int x=1, y=1, z=1, w=1;
double raiz=1, ponderada=1, harmonica=1, aritimetrica=1;

while(w!=-1){
printf("digite 3 numeros:  ");
scanf("%d %d %d", &x, &y, &z);
printf("digite 1 a 3 para escolher  a opcao:  ");
scanf("%d", &w);
raiz= sqrt(x*y*z);
ponderada= (x+2.0*y+3.0*z)/6.0;
harmonica = 3.0/((1.0/x)+(1.0/y)+(1.0/z));
aritimetrica= (x+y+z)/3.0;
switch (w){
case 1:
printf("A raiz quadrada eh: %f", raiz);
break;
case 2:
printf("A ponderada eh: %f", ponderada);
break;

case 3:
printf("A harmonica eh: %f", harmonica);
break;case 4:
printf("A aritimetrica eh: %f", aritimetrica);
break;
default:
printf("Essa opc n existe");
}}
printf("Obgd por usar");

return 0;
}
