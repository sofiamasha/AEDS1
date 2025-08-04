//recebe salario funcionario, calcule e mostre onovo salario, sabendo que sofreu um aumento de 25%
#include <stdio.h>
int main (){
float sal,percent,aumento, newsal;
printf("Digite o seu salario: ");
scanf("%f", &sal);
printf("Digite o percentual do aumento do seu salario: ");
scanf("%f", &percent);
 aumento = sal * percent / 100;
    newsal = sal + aumento;
    printf("O valor do aumento e: %.2f\n", aumento);
printf("Seu novo sal e: %.2f\n", newsal);
return 0;
}
