#include<stdio.h>
#include<math.h>
#define PI_RAD 3.14
#define PI_GRAUS 180
int main (){
float ang_graus;
float ang_rad, cosseno;
printf("Digite o valor do angulo: ");
scanf("%f", &ang_graus);
ang_rad=PI_RAD*ang_graus/PI_GRAUS;
printf("O seno de %f e %f.\n", ang_graus, sin(ang_rad));
printf("O cosseno de %f e %f.\n", ang_graus, cos(ang_rad));
printf("A tangente de %f e %f.\n",ang_graus, tan(ang_rad));

cosseno=sqrt(1-pow(sin(ang_rad),2));
printf("O cosseno de %f e %f.",ang_graus,cosseno);

return 0;
}
