
// Criar um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente.
#include <stdio.h>
int main ()
{
    int nu=2,nu2=2, numa, numu,nudi, opc;



    while(nu!=-1 && nu2!=-1)
    {
              printf("digite dois numeros ai parceiroooo: \n");
              scanf("%d %d", &nu, &nu2);
               printf("Oq vc quer fzr c essses numeros( 1 a 3)?: \n");
              scanf("%d", &opc);
                 numa=nu+nu2;
    numu=nu*nu2;
    nudi=nu/nu2;


        switch (opc)
        {
        case 1:
            printf("A soma dos numeros eh: %d\n", numa);
            break;
        case 2:
            printf("A multiplicacao dos numeros eh %d\n", numu);
            break;
        case 3:
            printf("A divisao dos numeros eh %d\n", nudi);
            break;
        default:
            printf("oxi esse nmr n existe viadinho");

        }

    }



    printf("obgd\n");
    return 0;
}
