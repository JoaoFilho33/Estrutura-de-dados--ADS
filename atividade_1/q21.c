#include <stdio.h>

int main(){
    int mes;
    printf("Informe um valor inteiro de meses: ");
    scanf("%d", &mes);

    int ano = mes/12;
    mes = ano%12;

    printf("Equivale a %d ano(s) e %d mes(es)\n", ano, mes);
}