#include<stdio.h.>
//teste prova 2 walisson: STRING SEM BIBLIOTECA STING.H

//1- Implemente uma função int tamanho(char *str); que retorna o tamanho da string sem usar strlen.
/*#include <stdio.h>

int tamanho(char *str) {
    int cont = 0;

    while (*str != '\0') {
        cont++;
        str++;
    }

    return cont;
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, 100, stdin); // lê string com espaços

    // Remove o \n do fgets se houver
    int i = 0;
    while (texto[i] != '\0') {
        if (texto[i] == '\n') {
            texto[i] = '\0';
            break;
        }
        i++;
    }

    printf("Tamanho da string: %d\n", tamanho(texto));
    return 0;
}
*/

//2- Implemente uma função que conte quantas vezes a letra 'a' aparece em uma string: int contaA(char *str);

/*#include <stdio.h>

int contaA(char *str) {
    int cont = 0;

    while (*str != '\0') {
        if (*str == 'a') {
            cont++;
        }
        str++;
    }

    return cont;
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, 100, stdin);

    // Remove \n, se houver
    int i = 0;
    while (texto[i] != '\0') {
        if (texto[i] == '\n') {
            texto[i] = '\0';
            break;
        }
        i++;
    }

    int resultado = contaA(texto);
    printf("A letra 'a' aparece %d vezes.\n", resultado);

    return 0;
}
*/

//3- Implemente uma função que copie uma string para outra (como o strcpy): void copia(char *destino, char *origem);

/* #include <stdio.h>

void copia(char *destino, char *origem) {
    while (*origem != '\0') {
        *destino = *origem;
        destino++;
        origem++;
    }
    *destino = '\0'; // termina a string
}

int main() {
    char origem[100];
    char destino[100]; // assume que tem espaço suficiente

    printf("Digite uma string para copiar: ");
    fgets(origem, 100, stdin);

    // Remover o \n, se tiver
    int i = 0;
    while (origem[i] != '\0') {
        if (origem[i] == '\n') {
            origem[i] = '\0';
            break;
        }
        i++;
    }

    copia(destino, origem);

    printf("String copiada: %s\n", destino);

    return 0;
}
*/

//4-Implemente uma função que inverta uma string na própria variável: void inverte(char *str);
/*
#include <stdio.h>

void inverte(char *str) {
    int inicio = 0;
    int fim = 0;

    while (str[fim] != '\0') {
        fim++;
    }
    fim--;

    while (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, 100, stdin);

    // Remove \n, se existir
    int i = 0;
    while (texto[i] != '\0') {
        if (texto[i] == '\n') {
            texto[i] = '\0';
            break;
        }
        i++;
    }

    inverte(texto);
    printf("String invertida: %s\n", texto);

    return 0;
}
*/

//5- Implemente uma função que compare duas strings caractere por caractere, como strcmp: int compara(char *str1, char *str2); // retorna 1 se iguais, 0 se diferentes

/* #include <stdio.h>

int compara(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0;
        }
        str1++;
        str2++;
    }

    if (*str1 == '\0' && *str2 == '\0') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);

    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);

    // Remove '\n' das strings, se houver
    for (int i = 0; str1[i]; i++) {
        if (str1[i] == '\n') str1[i] = '\0';
    }
    for (int i = 0; str2[i]; i++) {
        if (str2[i] == '\n') str2[i] = '\0';
    }

    if (compara(str1, str2)) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}
*/
//NOMES: VERDE
/*

void imprimir_formatado(char *str) {
    int i = 0;

    // Imprime o primeiro nome
    while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
        printf("%c", str[i]);
        i++;
    }

    // Espaço após o primeiro nome
    if (str[i] == ' ') {
        printf(" ");
        i++;
    }

    // Imprime iniciais dos próximos nomes
    int novo_nome = 1;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            novo_nome = 1; // sinaliza que o próximo caractere é inicial
        } else if (novo_nome && str[i] != '\n') {
            printf("%c. ", str[i]);
            novo_nome = 0;
        }
        i++;
    }

    printf("\n");
}

int main() {
    char nome[100];
    printf("Digite seu nome completo em MAIÚSCULAS: ");
    fgets(nome, 100, stdin);

    imprimir_formatado(nome);

    return 0;
}
*/
