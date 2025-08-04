int main (){
int n;
double i, somatorio;
printf("digite um numero: ");
scanf("%d", &n);
for(i=1; i<=n; i++){
somatorio= somatorio+ i/(n-i+1);
}
printf("O somatorio de %d eh %lf", n, somatorio);

return 0;
}
