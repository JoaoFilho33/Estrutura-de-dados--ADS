#include <stdio.h>
#include <stdlib.h>

#define fmt "%d"

typedef int Item;
typedef struct no {
    Item item;
    struct no *prox;
} *Lista;

    Lista inicio;
    Lista final;


Lista no(Item x, Lista L) {
    Lista n = (Lista)malloc(sizeof(struct no));
    n->item = x;
    n->prox = L;
    return n;
}

void exibe(Lista L) {
    while(L != NULL) {
        printf(fmt, L->item);
        L = L->prox;
    }
    printf("\n");
}

void substitui(Item x, Item y, Lista L) {
    while(L != NULL) {
        if(L->item == x) {
            L->item = y;  
        }
        L = L->prox;
    }
}

int main() {
    Lista I = no(1, no(2, no(1, no(4, no(1, NULL)))));

    exibe(I);//12141
    substitui(4, 3, I);//substitui toda a ocorrência do item 4 por 3
    exibe(I);//12131
}