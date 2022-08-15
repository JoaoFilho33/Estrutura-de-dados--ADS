#include <stdio.h>

int main()
{
    float n1;
    int peso1;
    float n2;
    int peso2;
    float n3;
    int peso3;

    printf("Informe sua nota 1: ");
    scanf("%f", &n1);
    printf("E o peso dessa nota: ");
    scanf("%d", &peso1);

    printf("Informe sua nota 2: ");
    scanf("%f", &n2);
    printf("E o peso dessa nota: ");
    scanf("%d", &peso2);

    printf("Informe sua nota 3: ");
    scanf("%f", &n3);
    printf("E o peso dessa nota: ");
    scanf("%d", &peso2);

    float media_p = ((n1*peso1) + (n2*peso2) + (n3*peso3)) / (peso1+peso2+peso3);

    printf("\nA média ponderada é %f\n", media_p);
}