#include <stdio.h>
int main ()
{
    int i, n;
    while(i!=0 || n !=0)
    {
            printf("Digite dois numeros: ");
    scanf("%d %d", &i, &n);
        if (i%2==0 && n%2==0)
        {
            printf("%d + %d = %d\n", i, n, i+n);
            printf("Faca mais uma vez: ");
        }
        else {
                printf("Nao e par, tente dnv: ");
        }


    }
    printf("\nEncerrando programa\n");


    return 0;
}
