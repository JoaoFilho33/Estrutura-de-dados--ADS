#include <stdio.h>
#include <stdlib.h>

#define linhas 5
#define colunas 5
int soma_linhas(int matriz[linhas][colunas])
{
    int soma;
    int soma_total;
    int valores_soma[linhas];
    for (int l = 0; l < linhas; l++)
    {
        soma = 0;
        for (int c = 0; c < colunas; c++)
        {
            // soma = 0;
            soma += matriz[l][c];
        }
        valores_soma[l] = soma;
        soma_total += soma;
    }
    for (int l = 0; l < linhas; l++)
    {
        printf("Linha %d: %d\n", l, valores_soma[l]);
    }

    printf("A soma das linhas é: %d\n", soma_total);
}

int main()
{
    int matriz[linhas][colunas];
    for (int l = 0; l < linhas; l++)
    {
        for (int c = 0; c < colunas; c++)
        {
            matriz[l][c] = rand() % 10;
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }

    //printf("A soma das linhas é: %d", soma_linhas(matriz, 3));
    soma_linhas(matriz);

    return 0;
}