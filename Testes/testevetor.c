int main (){
int i,n1, n2, tpares=0, timpar=0,tpositivo=0,tnegativo=0;
printf("Digite o numero inicial e o final: ");
scanf("%d %d", &n1, &n2);

for (int i = n1; i <= n2;i++){
    if (i%2==0){

        printf("%d eh par\n", i);
        tpares++;
    }else {

    printf("%d eh impar\n", i);
    timpar++;}
    if (i>=0){

    printf("%d eh positivo\n",i);
    tpositivo++;}
    else if (i<0){

        printf("%d eh nagativo\n", i);
        tnegativo++;}
    else {
    printf("%d eh neutros\n", i);
    }
    }
     printf("Total de numeros pares: %d\n", tpares);
    printf("Total de numeros ímpares: %d\n", timpar);
         printf("Total de numeros positivos: %d\n", tpositivo);
    printf("Total de numeros negativos: %d\n", tnegativo);
return 0;
}
