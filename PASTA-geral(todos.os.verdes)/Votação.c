#include <stdio.h>

int main() {
    int voto;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0;

    while (1) {
        scanf("%d", &voto);
        if (voto == 0) break;

        if (voto == 1) c1++;
        else if (voto == 2) c2++;
        else if (voto == 3) c3++;
        else if (voto == 4) c4++;
        else if (voto == 5) nulo++;
        else if (voto == 6) branco++;
    }

    int total = c1 + c2 + c3 + c4 + branco;

    printf("Candidato 1: %d voto(s)\n", c1);
    printf("Candidato 2: %d voto(s)\n", c2);
    printf("Candidato 3: %d voto(s)\n", c3);
    printf("Candidato 4: %d voto(s)\n", c4);
    printf("Votos nulos: %d\n", nulo);

    double porcentagem = 0;
    if (total > 0)
        porcentagem = (branco * 100.0) / (total + nulo);  // Corrigido aqui

    printf("Porcentagem de votos em branco: %.2lf%%\n", porcentagem);

    return 0;
}


