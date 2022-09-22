#include <stdio.h>

int main()
{
    float salario;
    printf("Informe seu salário: ");
    scanf("%f", &salario);

    printf("Um aumento de 25 porcento resulta em %f\n", (salario*0.25) + salario);
}