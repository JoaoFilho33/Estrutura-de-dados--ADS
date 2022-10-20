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

int soma(Lista L) {
    int soma = 0;

    while(L != NULL) {
        soma += L->item;
        L = L->prox;
    }

    return soma;
}

int main() {
    Lista I = no(1, no(2, no(1, no(4, no(1, NULL)))));

    printf(fmt, soma(I));//9
}