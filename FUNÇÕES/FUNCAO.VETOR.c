#include <stdio.h>

void Imprime1(int v[], int n){ //Tamanho do vetor = n

int i;

for (i=0; i<n; i++){
printf("%d", v[i]);
}

}

void Imprime2(int v[5]){ //Ja falei o tamanho

int i;
for(i=0; i<5; i++){
printf("%d", v[i]);

}

}

void Imprime3(int *v, int n){

int i;
for(i=0; i<n; i++){
printf("%d", v[i]);
}

}

int main(){

int vet[5] = {1,2,3,4,5};


puts("Primeiro imprime: ");
Imprime1(vet, 5); // vet e o tamanho

puts("\nSegundo imprime: ");
Imprime2(vet);

puts("\nTerceiro imprime: ");
Imprime3(vet,5);

}
