#include <stdio.h>
int main (){
double degrau, quant,objetivo;
printf("Digite o valor do degrau: ");
scanf("%lf", &degrau);
printf("Digite seu objetivo: ");
scanf("%lf", &objetivo);
quant=objetivo/degrau;
printf("Voce devera subir essa quantidade: %.2lf", quant);
}
