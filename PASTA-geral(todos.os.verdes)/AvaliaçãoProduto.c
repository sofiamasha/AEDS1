#include <stdio.h>

int main() {
    int idade, resposta, total = 0, sim = 0;
    int masc = 0, fem = 0;
    char sexo;
    int maior = 0, menor = 999;

    while (1) {
        scanf("%d", &idade);
        if (idade == -1) break;

        scanf(" %c %d", &sexo, &resposta);
        total++;

        if (resposta == 1) {
            sim++;
            if (sexo == 'M') masc++;
            else if (sexo == 'F') fem++;

            if (idade > maior) maior = idade;
            if (idade < menor) menor = idade;
        }
    }

    printf("Masculino: %d\n", masc);
    printf("Feminino: %d\n", fem);
    printf("%d anos\n", maior);
    printf("%d anos\n", menor);
    printf("%.2lf%%\n", (sim * 100.0) / total);

    return 0;
}

