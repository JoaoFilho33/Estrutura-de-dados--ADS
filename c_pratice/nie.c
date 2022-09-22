#include <stdio.h>

#define linhas 5
#define colunas 5
int soma_linhas(int matriz[linhas][colunas], int n_linha)
    {
        int soma = 0;
        int valores_soma[linhas];
        for (int l=0;l<linhas;l++)
        {
            for(int c=0;c<colunas;c++)
            {
                soma = 0;
                soma+=matriz[l][c];
            }
            valores_soma[l] = soma;
        }
        for(int l=0;l<linhas;l++)
        {
            printf("Linha %d: %d\n", l, valores_soma[n_linha]);
        }
        //return valores_soma[n_linha];
    }
int main()
{
    int matriz[linhas][colunas];
    for(int l=0;l<linhas;l++)
    {
        for(int c=0;c<colunas;c++)
        {
            matriz[l][c] = rand()%10;
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    printf("A soma das linhas é: %d", soma_linhas(matriz, 3));
    return 0;
}