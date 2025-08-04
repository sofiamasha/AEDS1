//Implemente a fun��o strcpy (char *destino, char *origem) usando ponteiros.

#include<stdio.h>

void strcpy_invertido(char *destino, char *origem);

int main() {
    char origem[] = "Ol�, mundo!";
    char destino[20];  // espa�o para copiar

    strcpy_invertido(destino, origem);

    printf("Origem: %s\n", origem);
    printf("Destino: %s\n", destino);

    return 0;
}

void strcpy_invertido(char *destino, char *origem) {
    int len = 0;
    char *p = origem;

    // Passo 1: descobrir o tamanho da origem
    while (*p != '\0') {   // enquanto n�o for o fim da string
        p++;               // avan�a para o pr�ximo caractere
        len++;             // conta quantos caracteres tem
    }

    // Passo 2: copiar invertido
    for (int i = 0; i < len; i++) {
        destino[i] = origem[len - 1 - i];
        // len-1-i pega do fim para o come�o
    }

    // Passo 3: marcar o fim da string destino
    destino[len] = '\0';
}


