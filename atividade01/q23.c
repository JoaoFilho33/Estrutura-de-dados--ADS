#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;

    printf("Informe três número inteiro: \n");
    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);
    printf("N3: ");
    scanf("%d", &n3);

    int media = (n1+n2+n3)/3;

    printf("Média = %d\n", media);
}