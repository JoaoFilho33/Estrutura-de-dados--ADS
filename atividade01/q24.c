#include <stdio.h>

int main()
{
    int ano;
    int mes;
    int dia;

    printf("Sua idade em: \n");
    printf("Anos: ");
    scanf("%d", &ano);
    printf("Meses: ");
    scanf("%d", &mes);
    printf("Dias: ");
    scanf("%d", &dia);

    ano = ano*368;
    mes = mes*12;

    int dias = ano+mes+dia;

    printf("%d dias\n", dias);
}