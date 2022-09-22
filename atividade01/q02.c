#include <stdio.h>

int main(){
    float dolar;
    float cotacao;
    printf("Informe o valor em dólar: ");
    scanf("%f", &dolar);
    printf("Informe a cotação do dólar: ");
    scanf("%f", &cotacao);

    printf("%f dolars equivalem a %f reais\n", dolar, dolar*cotacao);
}