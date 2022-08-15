#include <stdio.h>

int main(){
    float lado;
    float altura;

    printf("Lado do retângulo: ");  
    scanf("%f", &lado);
    printf("Altura do retângulo: ");
    scanf("%f", &altura);

    printf("Área: %f\n", lado*altura);
}