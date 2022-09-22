#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void main() {
    int tamanho = 100;
    Pilha pilha = criarPilha(tamanho);

    int dec = 16;

    do{
        push(dec%2, pilha);
        dec /= 2;
    }
    while (dec > 1);

    push(dec, pilha);

    while(pilha->topo != -1){
        printf("%d ", pop(pilha));
    }

    printf("\n");
}