#include <stdio.h>

int main(){

char num =10;
char *p;

p=&num;
printf("Vlor de num: %d\n", num);
printf("End de num: %p\n", &num);
printf("Vlor de p: %p\n", p);
printf("Valor apontado por p: %d\n", *p);

return 0;
}
