#include <stdio.h>

int main()
{
    int produto;
    printf("Valor do produto: ");
    scanf("%d", &produto);

    int entrada;
    int parcelas;

    if (produto % 3 == 0)
    {
        entrada = produto / 3;
        parcelas = produto / 3;
    }
    else
    {
        int resto = produto % 3;
        entrada = (produto / 3) + resto;
        parcelas = (produto / 3);
    }

    printf("Entrada de R$ %d,00 e 2 parcelas de R$ %d,00\n", entrada, parcelas);
}