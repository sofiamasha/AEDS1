#include <stdio.h>
#include <math.h>
int main ()
{
    int dia1,hora1,min1,seg1,dia2,hora2,min2,seg2,diaTotal,horaTotal,minTotal,segTotal,segInicio,segFinal,aux;
    scanf("%d",&dia1);
    scanf("%d %d %d",&hora1,&min1,&seg1);
    scanf("%d",&dia2);
    scanf("%d %d %d",&hora2,&min2,&seg2);

    diaTotal = dia2 - dia1;
    segInicio = (hora1 * 60 * 60) + (min1 * 60) + seg1;
    segFinal = (hora2 * 60 * 60) + (min2 * 60) + seg2;
    aux = abs(segFinal - segInicio);
    if (segFinal > segInicio)
    {
        horaTotal = aux / 3600;
        minTotal = (aux / 60) % 60;
        segTotal = aux % 60;
    }
    else
    {
        diaTotal--;
        horaTotal = 24 -( aux / 3600.0f);
        minTotal = (60 -(aux / 60) % 60) % 60;
        segTotal = (60 -aux % 60) % 60;
    }

    printf("%d dia(s)\n",diaTotal);
    printf("%d hora(s)\n",horaTotal);
    printf("%d minuto(s)\n",minTotal);
    printf("%d segundo(s)\n",segTotal);

}
