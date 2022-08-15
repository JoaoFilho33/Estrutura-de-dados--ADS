#include <stdio.h>

int main()
{
    float consumidor;
    float fabricante;
    printf("Quanto você pagou no seu carro? ");
    scanf("%f", &consumidor);

    printf("Informe a porcentagem cobrada pela fábrica: ");
    scanf("%f", &fabricante);

    float custo_fixo = 0.73 * consumidor; // valor dos impostos e do distribuidor

    float custo_fabricante = consumidor - (custo_fixo - ((consumidor * (fabricante/100))));

    printf("O custo de fábrica é R$ %f\n", custo_fabricante);
}