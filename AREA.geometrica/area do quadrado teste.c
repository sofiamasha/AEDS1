#include <stdio.h>
#include <math.h>
int main (){
int lado, perimetro, areaq;
int base, altura, areat;
printf ("Digite o valor do lado, por favor:  ");
scanf ("%d", &lado);
areaq= pow (lado,2);
perimetro= lado*4;
printf("A area do quadrado e: %d\n", areaq);
printf ("O perimemtro do quadrado e: %d\n", perimetro);


printf("\nDigite o valor da base e da altura separados por espaco, por favor: ");
scanf("%d %d", &base, &altura);
areat= (base*altura)/2;
printf ("A area do triangulo e: %d\n", areat);
return 0;
}
