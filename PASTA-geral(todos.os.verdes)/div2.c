#include <stdio.h>

void verificarDivisivel(int num) {
    if (num % 3 == 0 && num % 5 == 0) {
        printf("Divisivel por ambos\n");
    } else if (num % 3 == 0) {
        printf("Divisivel por 3\n");
    } else if (num % 5 == 0) {
        printf("Divisivel por 5\n");
    } else {
        printf("Nao e divisivel por 3 nem por 5\n");
    }
}

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    verificarDivisivel(num1);
    verificarDivisivel(num2);
    verificarDivisivel(num3);

    return 0;
}
