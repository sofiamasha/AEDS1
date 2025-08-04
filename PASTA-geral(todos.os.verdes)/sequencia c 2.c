#include <stdio.h>

int main() {
    int N;
    double S = 0.0;
    int numerador = 1;

    // Entrada do número de termos
    scanf("%d", &N);

    // Cálculo da série
    for (int i = 1; i <= N; i++) {
        S += (double)numerador / i;
        numerador += 2;
    }

    // Saída formatada com 2 casas decimais
    printf("%.2lf\n", S);

    return 0;
}

