/*Leia um valor inteiro N que � a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Voc� deve apresentar
a soma de Y impares consecutivos a partir de X inclusive o pr�prio X se ele for impar. Por exemplo:
para a entrada 45, a sa�da deve ser 45, que � equivalente �: 5+ 7 + 9 � 11 � 13
para a entrada 7 4, a sa�da deve ser 40, que � equivalente �: 7 + 9 � 11 � 13
Entrada
A primeira linha de entrada � um inteiro N que � a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo dois
 inteiros X eY.
Saida
imprima a soma dos consecutivos n�meros impares a partir do valor X. */
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
