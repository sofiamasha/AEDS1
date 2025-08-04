/*Considere a seguinte declaração: int A, *B, **C, ***D
Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse
valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C
o triplo e D o quádruplo.*/
#include <stdio.h>
int main()
{

    int A;
    int *B;
    int **C;
    int ***D;
//int Menina LINDA; *Menina Mediana; **Menina Feia; ***Garoto Feio
//Ou seja, o garoto feio aponta pra menina feia, pq é a unica opcao dele, a menina feia aponta pra menina mediana, que é a amiga dela,
// e a menina mediana, aponta pra menina linda.
//No fim, TODOS, menos a menina linda, apontam pra menina linda, pq ela é a mais interessante,
//porem, eles n acessam ela diretamente, usam  ponteiros pra tentarem chegar ate ela.


    printf("Digite o valor de A: \n");
    scanf("%d", &A);

    B= &A;
    C= &B;
    D= &C;


    int dobro = 2 * (*B);          // usando *B para acessar A
    int triplo = 3 * (**C);        // usando **C para acessar A
    int quadruplo = 4 * (***D);    // usando ***D para acessar A

    printf("O dobro de %d eh %d\n", A, dobro);
    printf("O triplo de %d eh %d\n", A, triplo);
    printf("O quadruplo de %d eh %d\n", A, quadruplo);
}
