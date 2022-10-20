#include <stdio.h>
#include <stdlib.h>

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
        printf("%d", L->item);
        L = L->prox;
    }
    printf("\n");
}

void empilha(Item item, Lista *topo) {
    *topo = no(item, *topo);
}

int desempilha(Lista *p) {
    Item item = (*p)->item;
    *p = (*p)->prox;

    return item;
}

int main() {
    Lista A = no(1, no(2, no(1, no(4, no(1, NULL)))));

    exibe(A);
    empilha(9, &A);//&A passa o endereço da pilha
    exibe(A);

    desempilha(&A);
    desempilha(&A);

    exibe(A);

    desempilha(&A);
    exibe(A);
}