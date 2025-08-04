#include <stdio.h>
#include <wchar.h>
//Walison é a sofia dps se vc puder explicar esse pq eu nao entendi nada, tive q pedir ajuda e msm assim n entendi, obrigada.
int main ()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);



    if (num1%3==0 || num1%5==0)
    {
        if (num1%3==0 && num1%5!=0)
        {
            printf("Divis\u00EDvel por 3\n");
        }
        if (num1%5==0 && num1%3!=0)
        {
            printf("Divis\u00EDvel por 5\n");
        }
    }
    if (num1%3==0 && num1%5==0)
    {
        printf("Divis\u00EDvel por ambos\n");
    }
    if (num1%3!=0 && num1%5!=0)
    {
        printf("N\u00E3o \u00E9 divis\u00EDvel por 3 nem por 5\n");
    }
    if (num2%3==0 || num2%5==0)
    {
        if (num2%3==0 && num2%5!=0)
        {
            printf("Divis\u00EDvel por 3\n");
        }
        if (num2%5==0 && num2%3!=0)
        {
            printf("Divis\u00EDvel por 5\n");
        }
    }
    if (num2%3==0 && num2%5==0)
    {
        printf("Divis\u00EDvel por ambos/n");
    }
    if (num2%3!=0 && num2%5!=0)
    {
        printf("N\u00E3o \u00E9 divis\u00EDvel por 3 nem por 5\n");
    }
    if (num3%3==0 || num3%5==0)
    {
        if (num3%3==0 && num3%5!=0)
        {
            printf("Divis\u00EDvel por 3");
        }
        if (num3%5==0 && num3%3!=0)
        {
            printf("Divis\u00EDvel por 5");
        }
    }
    if (num3%3==0 && num3%5==0)
    {
        printf("Divis\u00EDvel por ambos");
    }
    if (num3%3!=0 && num3%5!=0)
    {
        printf("N\u00E3o \u00E9 divis\u00EDvel por 3 nem por 5\n");
    }
}
