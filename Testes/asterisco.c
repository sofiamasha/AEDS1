int main ()
{
    int n,i,z;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(z=1; z<=i; z++)
        {

          if (z == 1 || z == i || i == n)
                printf("* ");
            else
                printf("  ");

        }
        printf("\n");
    }

    return 0;
}

