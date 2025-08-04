#include <stdio.h>
int main (){
float salario, gratificacao, imposto, novosalario;
printf ("Digite o seu salario: ");
scanf ("%f", &salario);
imposto=salario*10/100;
    novosalario = salario + 50 - imposto;
printf("Seu novo salario e: %.2f\n", novosalario);
return 0;
}
