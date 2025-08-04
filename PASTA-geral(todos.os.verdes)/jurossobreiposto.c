#include <stdio.h>
#include <math.h>

int main() {
    int casos;
    scanf("%d", &casos);

    for (int n = 0; n < casos; n++) {
        double C, i;
        int meses;

        scanf("%lf", &C);
        scanf("%lf", &i);
        scanf("%d", &meses);

        double simples = C * (1 + i * meses);
        double composto = C * pow(1 + i, meses);

        double diferenca = fabs(simples - composto);
        double jurosSimples = simples - C;
        double jurosComposto = composto - C;


        int parteInt, parteDec;

        parteInt = (int)diferenca;
        parteDec = (int)((diferenca - parteInt) * 100 + 0.5);
        printf("DIFERENÇA DE VALOR = %d,%02d\n", parteInt, parteDec);

        parteInt = (int)jurosSimples;
        parteDec = (int)((jurosSimples - parteInt) * 100 + 0.5);
        printf("JUROS SIMPLES = %d,%02d\n", parteInt, parteDec);

        parteInt = (int)jurosComposto;
        parteDec = (int)((jurosComposto - parteInt) * 100 + 0.5);
        printf("JUROS COMPOSTO = %d,%02d\n", parteInt, parteDec);

        if (n < casos - 1) {
            printf("\n");
        }
    }

    return 0;
}
