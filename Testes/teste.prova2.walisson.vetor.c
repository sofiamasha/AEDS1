//Teste prova 2 walisson: Vetor + Ponteiro + Recurs�o (5 quest�es)
#include <stdio.h>
//Implemente uma fun��o recursiva que retorne a soma dos elementos de um vetor de inteiros usando ponteiros: int soma(int *vet, int tam);
/*int soma(int *v, int tam);
int main(){
int tam, i;
printf("Digite o tamanho do vetor: ");
scanf("%d", &tam);
int v[tam];
for(i=0; i<tam; i++){
printf("Digite o %d elemento do vetor: ", i+1);
scanf("%d", &v[i]);
}
int resultado = soma(v,  tam);
printf("A soma dos elementos eh: %d", resultado);

}
int soma(int *v, int tam){
if(tam==0){
    return 0;
}else{
return *v + soma(v + 1, tam - 1);
}
}
*/

//2- Implemente uma fun��o recursiva que encontre o maior valor em um vetor de inteiros usando ponteiros: int max(int *vet, int tam);
/*int max(int *v, int tam);
int main(){
    int tam, i;
printf("Digite o tamanho do vetor: ");
scanf("%d", &tam);
int v[tam];
for(i=0; i<tam; i++){
printf("Digite o %d elemento do vetor: ", i+1);
scanf("%d", &v[i]);
}
int resultado = max(v, tam);
printf("O maior numero eh: %d", resultado);


return 0;
}
int max(int *v, int tam){

if(tam == 0){
    return 0;
}

int maior = max(v + 1, tam - 1);

    if (*v > maior) {
        return *v;
    } else {
        return maior;
    }
}
*/
//3-  Implemente uma fun��o recursiva que conte quantos pares h� em um vetor:int contaPares(int *vet, int n);
/*int contaPares(int *v, int tam);
int main(){
    int tam, i;
printf("Digite o tamanho do vetor: ");
scanf("%d", &tam);
int v[tam];
for(i=0; i<tam; i++){
printf("Digite o %d elemento do vetor: ", i+1);
scanf("%d", &v[i]);
}
int resultado = contaPares(v, tam);
printf("A quantidade de pares eh: %d ", resultado);
}
int contaPares(int *v, int tam){
if(tam == 0){
    return 0;
} if(*v%2==0){
 return 1 + contaPares(v+1, tam-1);
} else {
return 0 + contaPares(v+1, tam-1);
}

}
*/
// 4- Escreva uma fun��o que receba um vetor e o imprima de forma reversa usando recurs�o: void imprimeReverso(int *vet, int n);
/* void imprimeReverso(int *v, int tam);
 int main(){
    int tam, i;
printf("Digite o tamanho do vetor: ");
scanf("%d", &tam);
int v[tam];
for(i=0; i<tam; i++){
printf("Digite o %d elemento do vetor: ", i+1);
scanf("%d", &v[i]);
}
 printf("O reverso desse vetor eh: ");
    imprimeReverso(v, tam);

}
  void imprimeReverso(int *v, int tam){
   if(tam == 0){
    return 0;
   } else {
    printf("%d ", v[tam - 1]);            // imprime o �ltimo elemento atual
        imprimeReverso(v, tam - 1);          // chamada recursiva para o restante
   }

  } */

/*5-  Implemente uma fun��o recursiva que verifique se um vetor � pal�ndromo:int ehPalindromo(int *vet, int inicio, int fim);


// Fun��o recursiva que verifica se um vetor � pal�ndromo
int ehPalindromo(int *vet, int inicio, int fim) {
    if (inicio >= fim) {
        return 1; // chegou ao meio, � pal�ndromo
    }
    if (vet[inicio] != vet[fim]) {
        return 0; // elementos diferentes
    }
    return ehPalindromo(vet, inicio + 1, fim - 1); // verifica o pr�ximo par
}

int main() {
    int tam, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int v[tam];
    for (i = 0; i < tam; i++) {
        printf("Digite o %d� elemento: ", i + 1);
        scanf("%d", &v[i]);
    }

    if (ehPalindromo(v, 0, tam - 1)) {
        printf("O vetor � pal�ndromo \n");
    } else {
        printf("O vetor N�O � pal�ndromo \n");
    }

    return 0;
}
*/
