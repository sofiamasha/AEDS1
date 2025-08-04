int main (){
int n;
double i,soma=0.0;
printf("Digite o n de termos:");
scanf("%d", &n);
for(i=1; i<=n; i++){
soma= soma + i/(n-i+1);
}
printf("O valor de S para N = %d é: %.4f\n", n, soma);

return 0;
}
