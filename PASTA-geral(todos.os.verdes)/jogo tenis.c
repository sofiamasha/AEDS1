#include <stdio.h>

int main()
{
    char jogo;
    int ganho = 0;


    for (int i = 0; i < 6; i++)
    {
        scanf(" %c", &jogo);
        if (jogo == 'V')
        {
            ganho++;
        }
    }


    if (ganho >= 5)
    {
        printf("1\n");
    }
    else if (ganho >= 3)
    {
        printf("2\n");
    }
    else if (ganho >= 1)
    {
        printf("3\n");
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
