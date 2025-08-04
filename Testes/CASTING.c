#include <stdio.h>

int main(void){
int x, y, soma;
printf("Forneca os dois numeros.");
scanf("%d %d", &x, &y);

soma = x + y;
printf("Soma: %d\n", soma);
printf("Subtracao: %d\n", x-y);
printf("Parte inteira x/y: %d", x/y);
printf("Parte inteira y/x: %d", y/x);
printf("Resto de x por y: %d", x%y);
printf("Resto de y por x: %d", y%x);
printf("Multiplicacao: %d", x*y);
printf("Divisao de x por y: %f", x/ (float) y); //casting
printf("Divisao de y por x: %f", y/ (float) x); //casting
return 0;
}
