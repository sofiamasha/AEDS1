#include <stdio.h>
#include <string.h>

void contar_digitos(int num, int contador[]) {
    char str[20];
    sprintf(str, "%d", num);

    for (int i = 0; str[i] != '\0'; i++) {
        int digito = str[i] - '0';
        contador[digito]++;
    }
}

void resolver_caso(int A, int B) {
    int contador[10] = {0};

    for (int num = A; num <= B; num++) {
        contar_digitos(num, contador);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", contador[i]);
    }
    printf("\n");
}

int main() {
    int A, B;

    while (1) {
        scanf("%d %d", &A, &B);

        if (A == 0 && B == 0) {
            break;
        }

        resolver_caso(A, B);
    }

    return 0;
}
