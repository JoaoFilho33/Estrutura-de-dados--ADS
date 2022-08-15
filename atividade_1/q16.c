#include <stdio.h>

int main(){
    float km;
    printf("Distância em km: ");
    scanf("%f", &km);

    float m = km*1000;

    printf("Distância em metros = %f\n", m);
}