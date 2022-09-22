#include <stdio.h>

int main(){
    int h;
    printf("Informe um valor em horas: ");
    scanf("%d", &h);

    int semana = h/168;
    int resto = h%168;
    int dia = resto/24;
    resto = resto%24;
    int hora = resto%60;

    printf("Equivale a %d semana(s), %d dia(s) e %d hora(s)\n", semana, dia, hora);
}