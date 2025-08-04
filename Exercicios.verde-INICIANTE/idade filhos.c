#include <stdio.h>

int main() {
    int M, A, B, C, maisVelho;


    scanf("%d", &M);

    scanf("%d", &A);

    scanf("%d", &B);


    C = M - (A + B);


    maisVelho = (A > B) ? (A > C ? A : C) : (B > C ? B : C);


    printf("%d\n", maisVelho);

    return 0;
}
