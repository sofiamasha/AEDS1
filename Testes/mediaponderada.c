#include<stdio.h>
int main (){
int nota1, nota2;
float peso2=2, peso3=3, media;
printf("Digite a nota 1 e 2 : ");
scanf ("%d %d", &nota1, &nota2);
media= ((nota1*peso2)+(nota2*peso3))/(peso2+peso3);
printf("A media pondera eh: %.2f", media);
return 0;
}
