#include <stdio.h>

int main(){
    float real;
    printf("Informe um valor em reais: ");
    scanf("%f", &real);

    printf("R$ %f equivalem a 70 porcento de R$ %f\n", real*0.7, real);
}