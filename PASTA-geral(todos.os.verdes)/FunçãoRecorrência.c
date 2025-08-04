#include <stdio.h>

int R(int n) {
    if (n == 0) {
        return 1;
    } else {
        return 2 * R(n - 1);
    }
}

int main() {
    int n;
    printf("Entrada: ");
    scanf("%d", &n);
    printf("Saida: %d\n", R(n));
    return 0;
}
