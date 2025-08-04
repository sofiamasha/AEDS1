#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// n funciona pedir ro usuario digitar a quantidade, pq pode ser q ele digite um valor mt grande q nao seja suportado

int main(){

int tam, *vet;
printf("Digite o tamanho do vetor: ");
scanf("%d", &tam); // quero alocar pra essa quantidade aqui
srand(time(NULL));
vet = malloc(tam * sizeof (int)); // pra pegar a quantidade de inteiro q quero

if (vet){
 for(int i=0; i<tam; i++){

    *(vet + i) = rand() % 100; //nao entendi pq soma i
    //parenteses pra primeiro fzr aritmetrica de ponteiro e dps pega o ponteiro
 }
   for(int i=0; i<tam; i++){

 printf("%d ", *(vet+i));
 }


} else{
printf("Erro ao alocar memoria\n");
}

return 0;
}
