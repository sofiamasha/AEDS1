//Implemente um algoritmo que solicita o valor de 3 notas (n1, n2 e n3) e depois mostra: a soma,a média e o produto das notas.
#include <stdio.h>
int main(){
int n1, n2, n3, opc;
while(n1!=-1){
printf("Digite 3 numeros: \n");
scanf("%d %d %d", &n1, &n2, &n3);
if (n1=1){
    printf("obgd");
    break;
}
printf("1: soma\n 2: media \n 3: produto\n");
printf("escolha uma opcao: \n");
scanf("%d", &opc);
switch (opc){
case 1:
printf("o valor de %d + %d + %d eh %d\n", n1, n2, n3, n1+n2+n3);
break;
case 2:
printf("o valor de (%d + %d + %d)/3 eh %d\n", n1, n2, n3, (n1+n2+n3)/3);
break;
case 3:
printf("o valor de %d x %d x %d eh %d\n", n1, n2, n3, n1*n2*n3);
break;
}
}


return 0;
}
