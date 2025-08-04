
#include <stdio.h>
int main (){
int dvd=1;
printf("Escolha oq te agrada:\n");
printf("1 CD-ROM\n");
printf("2 DVD-ROM\n");
printf("3 DVD-9\n");
while(dvd!=-1){
printf("Digite um numero: \n");
scanf("%d", &dvd);
switch (dvd){
case 1:
printf("CD-ROM\n");
break;
case 2:
printf("DVD-ROM\n");
break;
case 3:
printf("DVD-9\n");
break;
default :
printf("n existe man\n");
}
}
printf("obgd\n");
return 0;
}
