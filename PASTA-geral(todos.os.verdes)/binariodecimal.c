#include <stdio.h>
int binarioParaDecimal(int binario) {
    if (binario == 0) {
        return 0;
    } else {
        return (binario % 10) + 2 * binarioParaDecimal(binario / 10);
    }
}

int main() {
    int binario;
    scanf("%d", &binario);
    printf("%d\n", binarioParaDecimal(binario));
    return 0;
}
