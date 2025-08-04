#include <stdio.h>

// Declara��o da fun��o que copia a string de origem para destino
void strcpy_custom(char *destino, char *origem);

int main() {
    char origem[] = "Bom dia";    // String origem que ser� copiada
    char destino[20];             // Espa�o para receber a c�pia da string

    strcpy_custom(destino, origem);  // Chama a fun��o para copiar a string

    printf("A origem era: %s\n", origem);   // Imprime a string original
    printf("O destino eh: %s\n", destino);  // Imprime a string copiada
    return 0;
}

// Fun��o que copia caracter a caracter a string de origem para destino
void strcpy_custom(char *destino, char *origem) {
    // Enquanto o caractere atual da origem n�o for o caractere nulo '\0'
    while (*origem != '\0') {
        *destino = *origem;  // Copia o caractere da origem para o destino
        destino++;           // Avan�a o ponteiro destino para pr�xima posi��o
        origem++;            // Avan�a o ponteiro origem para pr�xima posi��o
    }
    *destino = '\0';  // Ao final, coloca o caractere nulo para terminar a string destino
}
