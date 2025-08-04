#include <stdio.h>

int somaDivisoresRecursiva(int x, int divisor, int soma) {
    if (divisor >= x) {
        return soma;
    }
    if (x % divisor == 0) {
        soma += divisor;
    }
    return somaDivisoresRecursiva(x, divisor + 1, soma);
}

int somaDivisores(int x) {
    return somaDivisoresRecursiva(x, 1, 0);
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int X;
        scanf("%d", &X);

        if (somaDivisores(X) == X) {
            printf("%d eh perfeito\n", X);
        } else {
            printf("%d nao eh perfeito\n", X);
        }
    }

    return 0;
}
