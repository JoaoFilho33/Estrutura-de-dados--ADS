#include <stdio.h>

int main(){
    float base;
    float altura;
    printf("Base: ");
    scanf("%f", &base);
    printf("Altura: ");
    scanf("%f", &altura);

    printf("Área: %f\n", (base*altura)/2);
}