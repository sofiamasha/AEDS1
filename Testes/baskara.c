#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double delta, x1, x2;

    printf("Digite os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        printf("Isso nao e uma equacao do segundo grau.\n");
        return 1;
    }

    delta = pow(b, 2) - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes sao: %.2f e %.2f\n", x1, x2);
    } else {
        printf("Nao existem raizes reais.\n");
    }

    return 0;
}
