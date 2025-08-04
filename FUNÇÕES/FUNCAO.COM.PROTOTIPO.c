#include <stdio.h>

float maior(float num1, float num2); //assim eu posso por a main primeiro
//estou avisando a maquina que tera uma funcão q vou chamar
// o que tem dentro do parenteses é o parametro que vou enviar

int main()
{

    float x,y,m;
    printf("Insira um valor: \n");
    scanf("%f", &x);
    printf("Insira o segundo valor: \n");
    scanf("%f", &y);

    m=maior(x,y); //invoquei a funcao por aqui (PELA MAIN)
    //Depois a maquina se vira pra achar minha funcao que chamei la em cima

    printf("Maior: %.2f\n", m);

}




float maior(float num1, float num2) //PRECISA SER IDENTICO AO PROTOTIPO
//mas aqui com { e la em cima com ;
{

    if(num1>num2)
        return num1;

    else
        return num2;

}
