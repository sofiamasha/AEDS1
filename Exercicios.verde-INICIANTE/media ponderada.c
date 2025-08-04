#include <stdio.h>
int main (){
int nota1, nota2, nota3,peso1, peso2, peso3;
float media;
printf ("Digite o valor das tres notas separadas por espaco : ");
scanf("%d %d %d", &nota1, &nota2, &nota3);
printf ("Digite o valor dos pesos separadas por espaco : ");
scanf("%d %d %d", &peso1, &peso2, &peso3);
media = (float)(nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
printf("A media das notas e: %.2f\n", media);
return 0;
}
