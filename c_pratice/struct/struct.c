#include <stdio.h>

void main()
{
    struct horario
    {
        int horas;
        int minutos;
        int segundos;
        double teste;
    };

    struct horario agora;
    agora.horas = 15;
    agora.minutos = 23;
    agora.segundos = 12;

    struct horario depois;
    depois.horas = agora.horas - 2;

    printf("%d\n", depois.horas);
}
