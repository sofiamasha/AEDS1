#include <stdio.h>

int binarioParaDecimal(int binario) {
    if (binario == 0)
        return 0;
    return (binario % 10) + 2 * binarioParaDecimal(binario / 10);
}

int main() {
    int binario;
    scanf("%d", &binario);

    int decimal = binarioParaDecimal(binario);
    printf("%d\n", decimal);

    return 0;
}

