#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int converterACMparaDecimalRecursivo(char *numero, int comprimento, int posicao) {
    if (posicao == comprimento) {
        return 0;
    }

    int digito = numero[comprimento - posicao - 1] - '0';
    return digito * fatorial(posicao + 1) + converterACMparaDecimalRecursivo(numero, comprimento, posicao + 1);
}

int main() {
    char numero[6];

    while (1) {
        scanf("%s", numero);

        if (numero[0] == '0' && numero[1] == '\0') {
            break;
        }

        int comprimento = 0;
        while (numero[comprimento] != '\0') {
            comprimento++;
        }

        printf("%d\n", converterACMparaDecimalRecursivo(numero, comprimento, 0));
    }

    return 0;
}
