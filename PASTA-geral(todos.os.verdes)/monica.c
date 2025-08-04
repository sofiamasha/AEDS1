#include <stdio.h>

int main()
{
    int Monica, filho1, filho2, filho3, maisVelho;


    scanf("%d", &Monica);

    scanf("%d", &filho1);

    scanf("%d", &filho2);


    filho3 = Monica - (filho1 + filho2);

    if (filho1 > filho2 && filho1 > filho3)
    {
        maisVelho = filho1;
    }
    else if (filho2 > filho1 && filho2 > filho3)
    {
        maisVelho = filho2;
    }
    else
    {
        maisVelho = filho3;
    }


    printf("%d\n", maisVelho);

    return 0;
}
