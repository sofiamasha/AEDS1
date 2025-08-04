
#include <stdio.h>
int main (){
int nota;
printf("Digite uma nota: ");
scanf ("%d", &nota);
if (nota<=10 && nota>=9){
printf("A");
} else if (nota<=8 && nota>=7){
printf("B");
} else if (nota<=6 && nota>=5){
printf("C");
} else if (nota<5){
printf("D");
} else {
printf("n DEU VIADA");
}


return 0;
}
