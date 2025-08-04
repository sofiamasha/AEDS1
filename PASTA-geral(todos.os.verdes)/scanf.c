#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <math.h>
//nem esse eu entendi, dps se vc quiser explicar na sala pq eu e minhas amgs tivemos dificuldade.
int main () {
  setlocale(LC_ALL,"");
  int n1;
  float n2;

  scanf("%d %f",&n1,&n2);


  printf("Decimal: %.5d\n",n1);
  printf("Hexadecimal: %x\n",n1);
  printf("Octal: %o\n",n1);

  if(n1 >= 32 && n1 <= 126){
    printf("char: %c\n",n1);
  }
  else {
    printf("char: \n");
  }
  printf("Com 6 casas decimais: %.6f\n",n2);
  printf("Com 2 casas decimais: %.2f\n",n2);
  printf("Nota\u00E7\u00E3o cient\u00EDfica (lower): %.6e\n",n2);
  printf("Nota\u00E7\u00E3o cient\u00EDfica (upper): %.6E\n",n2 );
}
