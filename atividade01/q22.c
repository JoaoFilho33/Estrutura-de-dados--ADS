#include <stdio.h>

int main(){
    int min;
    printf("Informe um valor inteiro de minutos: ");
    scanf("%d", &min);

    int dia = min/1440;
    int resto = min%1440;
    int hora = resto/60;
    min = resto%60;

    printf("Equivale a %d dia(s), %d hora(s) e %d minuto(s)\n", dia, hora, min);
}