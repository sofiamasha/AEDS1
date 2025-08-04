//Escreva um programa que receba 2 pontos cartesianos (x, y) e calcule a distância Euclidiana
//entre eles.
#include<stdio.h>
#include<math.h>
int main (){
int x1,y1,x2,y2, p1,p2;
float distancia;
printf("Digite o x1 e o y1: ");
scanf("%d %d", &x1, &y1);
printf("Digite o x2 e o y2: ");
scanf("%d %d", &x2, &y2);
p1=x2-x1;
p2=y2-y1;
distancia= sqrt((pow(p1,2))+(pow(p2,2)));
printf("A distancia euclidiana eh: %.2f", distancia);
return 0;
}
