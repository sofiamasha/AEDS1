#include <stdio.h>
#include<stdlib.h>
#include<locale.h> //vou me mata4

int main(){
    setlocale(LC_ALL,"Portuguese");
    double str[100];
    printf("Digite uma frase:\n");
    fgets(str,100*sizeof(double),stdin);
    printf("Sua frase é: %s",str);







}
