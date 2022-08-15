#include <stdio.h>

int main()
{
    int ano;
    float preco_carteira;
    int qtd_cig;
    float valor_dia;

    printf("Há quantos anos você fuma? ");
    scanf("%d", &ano);
    printf("Quantos cigarros você fuma por dia? ");
    scanf("%d", &qtd_cig);
    printf("Qual o preço de uma carteira de cigarro? ");
    scanf("%f", &preco_carteira);
    // uma carteira possui 20 cigarros

    float dia = ano * 365;
    if (qtd_cig <= 20)
    {
        valor_dia = preco_carteira;
    }
    else{
        valor_dia = (qtd_cig / 20) * preco_carteira;
    }

    float valor_total = valor_dia * dia;

    printf("Já foram gastos R$ %f em cigarro\n", valor_total);
}