#include <stdio.h>

int main()
{
    int dia;

    printf("Sua idade em dias: ");
    scanf("%d", &dia);

    int ano = dia/365;
    int resto = dia%365;
    int mes = resto/30;
    dia = resto%30;

    printf("%d ano(s), %d mes(s) e %d dia(s)\n", ano, mes, dia);
}