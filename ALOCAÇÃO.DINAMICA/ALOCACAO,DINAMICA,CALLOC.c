//calloc aloca memoria e retorna um ponteiro para onde alocou-a
//retorna NULL se nao alocar
//!= entre calloc e malloc:
//malloc recebe 1 PARAMETRO - a quantidade de bites que quer alocar(sizeof)
//calloc recebe 2 PARAMETROS - 1: a quantidade de elementos que quero alocar 2: a quantidade de memoria do elemento que quero alocar
//alocacao dinamica serve para alocar memoria da quantidade desconhcida de elmentos
//v[100] - sei quantos elementos tenho, usando mallo eh pq eu n sei

//CALLOC nao gera lixo pq aloco memoria e ZERO todos os bites

#include <stdio.h>
#include <stdlib.h>

int main(){
int *x;
//x = malloc(sizeof(int));
x=calloc(1, sizeof(int));
//quero alocar memoria pra um inteiro
//qual o tamanho de um inteiro para a memoria? o sizof descobre


if (x){ //testar se deu certo
    //x != NULL
    printf("Deu certo alocar memoria\n");
    printf("x: %d\n", *x);
 *x=50;
//alterando conteudo aloado por x
printf("x: %d\n", *x);
} else {

printf("Erro ao alocar memoria\n");
}
return 0;
}
