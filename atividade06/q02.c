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


int ocorrencias(Item x, Lista L) {
    int count = 0;
    if(L == NULL) {
        return 0;
    }

    while(L != NULL) {
        if(x == L->item) {
            count++;
        }   
        L = L->prox;
    }
        
    return count;
}


int main() {
    Lista I = no(1, no(2, no(1, no(4, no(1, NULL)))));

    printf("%d\n", ocorrencias(1, I));//3
}