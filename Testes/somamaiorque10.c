#include <stdio.h>
//01-Construa um programa que leia dois valores num�ricos inteiros e efetue a adi��o; caso o resultado seja maior que 10, apresent�-lo.
int main()
{
    int n1, n2, soma;
    while(1){
        printf("Digite dois numero: \n");
    scanf("%d %d", &n1, &n2);
    soma= n1+n2;
    if (soma > 10)
    {
        printf(" a soma eh: %d", soma);
    }
    else
    {
        printf("nao deu");
    }
    }
    printf("obgd");
    return 0;
}

