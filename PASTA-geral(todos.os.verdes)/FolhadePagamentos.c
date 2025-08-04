#include <stdio.h>

int main() {
    int n, num;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        int soma = 0;

        for (int j = 1; j <= num; j++) {
            if (num % j == 0) {
                soma += j;
            }
        }

        printf("%d\n", soma);
    }

    return 0;
}
