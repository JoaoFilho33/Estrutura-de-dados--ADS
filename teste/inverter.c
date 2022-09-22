#include <stdio.h>

int main()
{
    int num, cifra;
    printf("Informe um valor positivo: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        do
        {
            cifra = num % 10;
            printf("%i", cifra);
            num /= 10;
        } while (num != 0);
        printf("\n");
    }
    else
    {
        num = num * (-1);

        printf("-");

        do
        {
            cifra = num % 10;
            printf("%i", cifra);
            num /= 10;
        } while (num != 0);
        printf("\n");
    }
}