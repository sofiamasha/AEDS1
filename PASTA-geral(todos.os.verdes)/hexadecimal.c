#include <stdio.h>

int main()
{
    int numInt;
    float numFloat;

    scanf("%d %f", &numInt, &numFloat);

    printf("Decimal: %05d\n", numInt);
    printf("Hexadecimal: %x\n", numInt);
    printf("Octal: %o\n", numInt);
    printf("Caractere: %c\n", (unsigned char)numInt);
    printf("Com 6 casas decimais: %.6f\n", numFloat);
    printf("Com 2 casas decimais: %.2f\n", numFloat);
    printf("Notação científica (inferior): %e\n", numFloat);
    printf("Notação científica (superior): %E", numFloat);

    return 0;
}

