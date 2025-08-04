
#include <stdio.h>
int main (){
int A,B,C;
printf(" digite tres numeros: ");
scanf("%d %d %d", &A, &B, &C);
if (A==-1 || A==0 || B==-1 || B==0){
printf("Valor invalido");
}
else if (C%A==0 && C%B==0){
printf("Divisivel por ambos");
} else if(C%A==0 || C%B==0){
printf("Divisivel por um");
} else {
printf("Divisivel por nenhum");
}
return 0;
}
