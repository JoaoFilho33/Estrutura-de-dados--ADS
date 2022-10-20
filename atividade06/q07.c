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

int tam(Lista L) {
    if(L == NULL) return 0;
    return 1 + tam(L->prox);
}

int ehIgual(Lista X, Lista Y) {
    int count = 0;
    int tamX = tam(X);

    if(tam(X) != tam(Y)) return 0;

        while(X != NULL && Y != NULL) {
        if(X->item == Y->item) {
           count++;
        }
        X = X->prox;
        Y = Y->prox;
        }
    
    if(count == tamX) return 1;//se count == tamX, obrigatoriamente X e Y são iguais
    return 0;
}

int main() {
    Lista A = no(1, no(2, no(1, no(4, no(1, NULL)))));
    Lista B = no(1, no(2, no(1, no(4, no(1, NULL)))));
    Lista C = no(2, no(3, no(2, no(4, NULL))));

    exibe(A);
    exibe(B);
    exibe(C);

    printf("(A, B) = %d\n", ehIgual(A, B));
    printf("(A, C) = %d\n", ehIgual(A, C));
}