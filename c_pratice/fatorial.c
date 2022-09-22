#include <stdio.h>

int main()
{
    int fatorial(int x);
    int numero, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("O fatorial é %d\n", resultado);
}

int fatorial(int x)
{
    int resultado;

    if(x == 0){
        resultado = 1;
    }
    else{
        resultado = x * fatorial(x-1);
    }

    return resultado;
}