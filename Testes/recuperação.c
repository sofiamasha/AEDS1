
#include <stdio.h>

int main()
{
    int p1=1,p2,p3,p4,p5, media;
    while(p1!=0){
    printf("Informe quanto vc tirou da p1 a p4(digite 0 na p1 para parar): ");
    scanf("%d %d %d %d", &p1, &p2, &p3, &p4);
    media= (p1+p2+p3+p4)/4;
    if (media<6){
        printf("Voce precisa melhorar suas notas\n");
        p5= 6*5-(p1+p2+p3+p4);
        printf("Voce precisa tirar %d pontos na prova 5 para passar\n", p5);}
      else if (media>=6){
            printf("Voce passou\n");
        }
    }
       printf("Programa encerrado.\n");
    return 0;
}

