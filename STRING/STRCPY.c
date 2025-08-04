#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20 //controla tamanho string

int main(){
setlocale(LC_ALL, "Portuguese");

char origem [N] = {"Olá, Sofia!"};
char destino [N]; //n recebe nada // conteudo total aleaorio, lixo

printf("Antes do strcpy: \n");
puts(origem); // recebe Ola sofia
puts(destino); // n sabe oq tem aqui / lixo

//origem=destino NAO PODE, n le em string

strcpy(destino, origem);

printf("Depois do strcpy: \n");
puts(origem);
puts(destino);

return 0;
}
