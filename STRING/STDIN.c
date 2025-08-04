//stdin= entrada padrao de dados(teclado)

#include <stdio.h>
int main (){
char s[10];

printf("Digite algo (gets):\n");
gets(s); //le coisa a mais(mais de 9 caracteres(10 ne pq o 1 é o \0));
// le ate a primeira quebra de linha (\n)
fflush(stdin); // fflush: limpa stdin:teclado, ou seja, limpa teclado

puts("Resultado: ");
puts(s);
puts("");

printf("Digite algo(fgets): \n");
fgets(s,10,stdin);
fflush(stdin);

puts("Resultado: ");
puts(s);


return 0;
}
