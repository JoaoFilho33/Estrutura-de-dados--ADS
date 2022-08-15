#include <stdio.h>

int main(){
    int n1;
    int n2;
    printf("Informe um número inteiro: ");
    scanf("%d", &n1);
    printf("Informe outro número inteiro: ");
    scanf("%d", &n2);

    printf("O quociente da divisao entre %d e %d é %d; e o Resto é %d\n", n1, n2, n1/n2, n1%n2);
}