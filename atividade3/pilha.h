#include <stdio.h>
#include <stdlib.h>

typedef char* ItemP;

typedef struct pilhas{
    int max;
    int topo;
    ItemP *item;
} *Pilhas;

int ehPilhaSVazia(Pilhas pilha) {
    return pilha->topo == -1;
}

int ehPilhaSCheia(Pilhas pilha) {
    return pilha->topo == pilha->max-1;
}

Pilhas criarPilhaS(int tamanho) {
    Pilhas pilha = (Pilhas)malloc(sizeof(struct pilhas)); // Aloca área na memória

    pilha->max = tamanho; // indica capacidade de itens da pilha
    pilha->topo = -1; // Indica que a pilha está (inicialmente) vazia
    pilha->item = (ItemP*)malloc(sizeof(ItemP) * tamanho);

    return pilha;
}

void pushS(ItemP itemp, Pilhas pilha) { //gamb (ItemPilhaS itemp)
    
    if( !ehPilhaSCheia(pilha)) {
        pilha->topo++;
        pilha->item[pilha->topo] = itemp; //gamb (itemp)
    }

}

ItemP popS(Pilhas pilha) {
    
    if( !ehPilhaSVazia(pilha)) {
        ItemP item = pilha->item[pilha->topo];
        pilha->topo--;
        
        return item;
    }
}

void showPilhaS(Pilhas pilha) {

    while(!ehPilhaSVazia(pilha)) {
        printf("%s", popS(pilha));
        }
        printf("\n");
}

void destruirPilhaS(Pilhas* ponteiroPilha) {
    
    free((*ponteiroPilha)->item);
    free(ponteiroPilha);
    ponteiroPilha = NULL;
}



ItemP getTopoS(Pilhas pilha) {

    if( ehPilhaSVazia(pilha)) { puts("A pilha está vazia!"); abort(); }
    return pilha->item[pilha->topo];

}