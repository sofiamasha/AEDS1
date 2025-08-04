//Crie um programa que contenha um array de inteiros com 10 elementos. Imprima o elemento e o
//endereço de cada posição do array.
#include <stdio.h>
#include <stdlib.h>  // para rand() e srand()
#include <time.h>
int main()
{
    srand(time(NULL));
    int v[10];
int i;
    for( i=0; i<10; i++){
       v[i] = rand() % 100;
         printf("\nO endereco da %d posicao do elemento %d  eh: %p\n  ",i, v[i], &v[i]);

}
}
