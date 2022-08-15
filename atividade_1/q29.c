#include <stdio.h>

int main()
{
    int saque;
    printf("Saque: ");
    scanf("%d", &saque);

    int n100 = saque/100;
    int resto = saque%100;
    int n50 = resto/50;
    resto = resto%50;
    int n20 = resto/20;
    resto = resto%20;
    int n10 = resto/10;
    resto = resto%10;
    int n5 = resto/5;
    resto = resto%5;
    int n2 = resto/2;
    resto = resto%2;

    printf("%d notas de 100, %d notas de 50, %d notas de 20\n",  n100, n50, n20);
    printf("%d notas de 10, %d notas de 5, %d notas de 2\n", n10, n5, n2);
}