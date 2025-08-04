#include <stdio.h>
int main (){
float salario,gratificacao, imposto, novosalario;
printf("Digite o salario atual: ");
scanf("%f", &salario);
    gratificacao = salario * 5 / 100;
    imposto = salario * 7 / 100;
  novosalario = salario + gratificacao - imposto;
printf("O salario novo e: %.2f\n", novosalario);
return 0;
}
