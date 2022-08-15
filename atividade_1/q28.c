#include <stdio.h>

int main()
{
    float peso_latao;
    printf("Informe o peso do latão em kg: ");  
    scanf("%f", &peso_latao);

    float cobre = 0.7 * peso_latao;
    float zinco = 0.3 * peso_latao;

    printf("O latão possui %f kg de cobre e %f kg de zinco\n", cobre, zinco);
}