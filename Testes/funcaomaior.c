#include <stdio.h>
int Maior(int n1, int n2);

int main(){
int x,y, m;

printf("Digite um numero: \n");
scanf("%d", &x);

printf("Digite o segundo numero: \n");
scanf("%d", &y);



m= Maior(x,y);

printf("O maior numero eh: %d", m);

return 0;

}
int Maior(int n1, int n2){

if (n1>n2){
return n1;
} else{
return n2;
}
}
