#include <stdio.h>

int contarDigitos(int N) {
    if (N < 10) {
        return 1;
    }
    return 1 + contarDigitos(N / 10);
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", contarDigitos(N));
    return 0;
}
