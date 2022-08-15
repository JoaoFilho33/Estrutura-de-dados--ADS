#include <stdio.h>

int main(){
    int m;
    printf("Valor inteiro em metros: ");
    scanf("%d", &m);

    int km = m/1000;

    printf("Equivale a %d Km e %d m\n", km, m%1000);
}