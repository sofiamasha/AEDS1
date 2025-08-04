#include<stdio.h>
int main (){
int i,n;
while(n!=0){
printf("Digite um nmr: ");
scanf("%d", &n);
for(i=1; i<=10; i++){
printf("A tabuada desse nmr eh: ");
printf("%d x %d = %d\n", n, i, n*i);
}
}
printf("Acabou");
return 0;
}
