#include <stdio.h>
#include <stdlib.h>

#define fmt "%d\n"

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

int tam(Lista L) {
    if(L == NULL) return 0;
    return 1 + tam(L->prox);
}

int ultimo(Lista L) {
    int count = 1;

    while(L != NULL) {
        if(count == tam(L)) return L->item;
        count++;
        L = L->prox;
    }
}

int main() {
    Lista I = no(1, no(2, no(1, no(4, no(1, NULL)))));

    printf(fmt, ultimo(I));
}