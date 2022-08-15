#include <stdio.h>

int main()
{
    int num[3] = {1, 2, 3};
    int vetor[3] = {};
    int i;
    int count = 2;

    for (i = 0; i < 3; i++)
    {
        vetor[i] = num[count];
        count--;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d", vetor[i]);
    }
    printf("\n");
}