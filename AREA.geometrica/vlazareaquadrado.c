#include <stdio.h>
#include <math.h>

int main() {
    float lado, area;

    printf("Digite o valor do lado:\n");
    scanf("%f", &lado);

    area = pow(lado, 2);

    printf("\nArea = %.2f\n", area);

    return 0;
}
