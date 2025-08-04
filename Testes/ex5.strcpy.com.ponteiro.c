#include <stdio.h>

// Declaração da função que copia a string de origem para destino
void strcpy_custom(char *destino, char *origem);

int main() {
    char origem[] = "Bom dia";    // String origem que será copiada
    char destino[20];             // Espaço para receber a cópia da string

    strcpy_custom(destino, origem);  // Chama a função para copiar a string

    printf("A origem era: %s\n", origem);   // Imprime a string original
    printf("O destino eh: %s\n", destino);  // Imprime a string copiada
    return 0;
}

// Função que copia caracter a caracter a string de origem para destino
void strcpy_custom(char *destino, char *origem) {
    // Enquanto o caractere atual da origem não for o caractere nulo '\0'
    while (*origem != '\0') {
        *destino = *origem;  // Copia o caractere da origem para o destino
        destino++;           // Avança o ponteiro destino para próxima posição
        origem++;            // Avança o ponteiro origem para próxima posição
    }
    *destino = '\0';  // Ao final, coloca o caractere nulo para terminar a string destino
}
