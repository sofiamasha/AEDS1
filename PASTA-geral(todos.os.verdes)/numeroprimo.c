#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;


    while (1)
    {
        scanf("%d", &num);

        if (num < 0)
        {
            break;
        }


        if (ehPrimo(num))
        {
            printf("Primo\n");
        }
        else
        {
            printf("Nao primo\n");
        }
    }

    return 0;
}
