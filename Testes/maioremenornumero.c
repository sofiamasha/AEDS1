#include <stdio.h>

int main()
{
    int i=0,num=0, menor=0, maior=0;
    do
    {
        printf("Digite um numero: \n");
        scanf("%d", &num);
        if (i==0)
        {
            maior=num;
            menor=num;
            i++;
        }
        else if(num==-1)
        {
            break;
        }
        else if(num>maior)
        {
            maior=num;
        }
        else if(num<menor)
        {
            menor=num;
        }
    }
    while(1);
    printf("\n Maior numero eh %d \nE o menor numero eh %d", maior,menor);
    return 0;
}
