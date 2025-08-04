/*Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar
a soma de Y impares consecutivos a partir de X inclusive o próprio X se ele for impar. Por exemplo:
para a entrada 45, a saída deve ser 45, que é equivalente à: 5+ 7 + 9 ÷ 11 ÷ 13
para a entrada 7 4, a saída deve ser 40, que é equivalente à: 7 + 9 ÷ 11 ÷ 13
Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo dois
 inteiros X eY.
Saida
imprima a soma dos consecutivos números impares a partir do valor X. */
int main(){
int i,testesi, numero2, testes, soma=0;
printf("Digite a quantidade de testes: ");
scanf("%d", &testes);
printf("Digite a quantidade de testes inicial e final: ");
scanf("%d %d", &testesi, &numero2);
printf("A soma de %d a %d eh\n", testesi, numero2);
for(i=testesi;  i<=numero2; i++){
    if(i%2!=0){
            soma= soma + numero2*2+1;
        printf(" %d + %d ", soma, numero2*2+1);
    }
}
return 0;
}
