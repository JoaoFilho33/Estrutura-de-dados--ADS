#include <stdio.h>

int main(){
    float km;
    printf("Informe uma velocidade em km/h: ");
    scanf("%f", &km);

    printf("%f km/h equivalem a %f m/s\n", km, km/3.6);
}