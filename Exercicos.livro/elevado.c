#include<stdio.h>
#include<math.h>
int main (){
double num1,num2,elev;
printf("Digite o valor do primeiro numero (maior que 0): ");
scanf ("%lf", &num1);
printf("Digite o valor do segundo numero (maior que 0): ");
scanf ("%lf", &num2);
elev=pow(num1,num2);
printf("O valor do numero 1 elevado ao numero 2 e: %lf", elev);

return 0;
}

