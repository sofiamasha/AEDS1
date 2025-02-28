#include <stdio.h>
#include <math.h>
int main () {
    int lado=0;
    //solicita o comprimentodo do lado do quadrado
    printf("Digite o comprimento do lado do quadrado: ");
    scanf ("%d", &lado);

    lado = pow(lado,2);
    
    printf ("\n%d", lado);

    return (0);
}
