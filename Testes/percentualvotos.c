/*Implemente um programa que leia a quantidade de eleitores de um munic�pio, o n�mero de
votos brancos, nulos e v�lidos. Calcule e imprima o percentual de cada um dos tipos de votos
(brancos, nulos e v�lidos).*/
#include<stdio.h>
int main (){
int eleitores, votob, voton, votoi;
float pvotob, pvoton, pvotoi;
printf("Digite a quantidade de eleitores, voto branco, vto nulo e voto valido:");
scanf("%d %d %d %d", &eleitores, &votob, &voton, &votoi);
    pvotob = (float)votob / eleitores *1000;
    pvoton = (float)voton / eleitores *1000;
    pvotoi = (float)votoi / eleitores *1000;
printf("O percetual de voto branco foi %.2f%%, vto nulo foi %.2f%% e voto valido foi %.2f%%", pvotob, pvoton, pvotoi);
return 0;}
