#include <stdio.h>
int main (){
    double salario, imposto, inss;
        double newsalario, newimposto, newinss;
        char opcao;
    printf("Digite seu salario, seu imposto,  sua taxa de inss separados por espaco:  ");
    scanf ("%lf %lf %lf", &salario, &imposto, &inss);
  newimposto= (imposto*salario)/100;
   newinss= (inss*salario)/100;
    newsalario= salario-newimposto-newinss;


printf("escolha uma das opcoes abaixo: ");
printf("\nA= Ver novo salario\n");
printf("\nB= Ver imposto\n" );
printf("\nC= Ver inss\n" );
scanf(" %c", &opcao);
 switch (opcao){
 case 'A':
     printf("Seu salario e: %.2lf", newsalario);
     break;
    case 'B':
            case 'x':
     printf("Seu imposto e: %.2lf", newimposto);
     break;
      case 'c':
           case 'C':
     printf("Seu inss e: %.2lf", newinss);
     break;
           default:
            printf("Essa opcao nao existe, tente outra vez");
     }
    return 0;

}
