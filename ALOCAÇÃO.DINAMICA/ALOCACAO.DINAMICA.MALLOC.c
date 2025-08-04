//Malloc (memoria alocada)
//retorna um ponteiro para regiao de memoria q foi alocada
//retorna null se nao consegiu alocar, ponteiro fica nulo

//MALLOC gera lixo pq aloco memoria sem inicializar
#include <stdio.h>
#include <stdlib.h>

int main(){
    int p=10;
int x=10;
x = malloc(2*sizeof(int));
// int = pra quem o ponteiro aponta (4 bies que o ponteiro gurda)
//endereço é retorado para o x
//sizeof= nao sei quanto quero guardar ent uso ele
// x recebe o retorno da malloc

if (x){ //testar se deu certo
    //x != NULL
    printf("Deu certo alocar memoria\n");
    printf("x: %d\n", x);
 x=50;
//alterando conteudo aloado por x
printf("x: %d\n", x);
} else {

printf("Erro ao alocar memoria\n");
}
return 0;
}
