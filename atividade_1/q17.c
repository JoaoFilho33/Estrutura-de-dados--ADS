#include <stdio.h>

int main(){
    float kg;
    printf("Peso em kg: ");
    scanf("%f", &kg);

    float g = kg*1000;

    printf("Peso em gramas = %f\n", g);
}