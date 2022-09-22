#include <stdio.h>

int main(void){
    int num1 = 10;
    int num2 = 20;

    int resposta;

    num1 < num2 ? printf("sim\n") : printf("não\n");

    num1 < num2 ? (resposta = 10) : (resposta = -10);

    printf("%i\n", resposta);
}