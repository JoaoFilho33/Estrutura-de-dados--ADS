#include <stdio.h>

int main(void)
{
    int i;

    printf("Insira um número inteiro de 1 a 5: ");
    scanf("%i", &i);

    switch (i) // se o valor de i for 1, escreva primeiro; caso o valor de i for 2, escreva segundo;
    {
    case 1:
        printf("Primeiro\n");
        break;
    case 2:
        printf("Segundo\n");
        break;
    case 3:
        printf("Terceiro\n");
        break;
    case 4:
        printf("Quarto\n");
        break;
    case 5:
        printf("Quinto\n");
        break;
    default:
        printf("Valor inválido\n");
        break;
    }
}