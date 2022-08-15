#include <stdio.h>

int main(){
    float m;
    printf("Altura em metros: ");
    scanf("%f", &m);

    float cm = m*100;

    printf("Altura em cm = %f\n", cm);
}