

   #include <stdio.h>
   int main (){
   int cod=1;
   while (cod!=-1){
   printf("Digite um codigo: ");
   scanf("%d", &cod);
   switch (cod){
   case 101:
   printf("Vendedor\n");
   break;
      case 102:
   printf("Atendente\n");
   break;
      case 103:
   printf("Auxiliar Técnico\n");
   break;
      case 104:
   printf("Assistente\n");
   break;
      case 105:
   printf("Coordenador\n");
   break;
      case 106:
   printf("Gerente\n");
   break;
   default:
   printf("Nao existe esse cod\n");
   }
   }
   printf("obgd");

   return 0;
   }
