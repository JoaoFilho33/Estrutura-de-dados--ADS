#include <stdio.h>
#include <stdlib.h>
//#include <assert.h>
//#define MAXTAM 100

typedef int ItemP;

typedef struct pilha{
    int max, topo;
    ItemP *item;

} *Pilha;


Pilha criarPilha(int tamanhoP) {
    Pilha pilha = (Pilha)malloc(sizeof(struct pilha));

    pilha->max = tamanhoP;
    pilha->topo = -1;
    pilha->item = (ItemP*)malloc(sizeof(struct pilha));
    
    return pilha;
    /*pPilha->topo = 0;
    pPilha->tamanho = tamanhoP;
    return (pPilha->item = malloc(pPilha->tamanho * sizeof(int)));*/
}

int ehPilhaVazia (Pilha pilha) {
    return pilha->topo == -1;
}

int ehPilhaCheia(Pilha pilha) {
    return pilha->topo == pilha->max - 1;
}

void push(ItemP itemP, Pilha pilha) {
    if(!ehPilhaCheia(pilha)){
        pilha->topo++;
        pilha->item[pilha->topo] = itemP;
    }
    else{
        printf("Pilha Cheia!");
    }
}

int pop(Pilha pilha) {
    if(!ehPilhaVazia(pilha)) {
        ItemP item = pilha->item[pilha->topo];
        pilha->topo--;

        return item;
    }
    else{
        printf("Pilha Vazia!");
    }
}

//esvazia toda a pilha de uma vez, e exibe cada saída
void destruirPilha(Pilha pilha) {
    int x;
    while(x = pop(pilha)){
        printf("%d\n", x);
    }
}

void imprimirPilha(Pilha pilha){
    int i;
    for(i=pilha->topo-1; i > -1; i--){
        printf("%d\n", pilha->item[i]);
    }
}