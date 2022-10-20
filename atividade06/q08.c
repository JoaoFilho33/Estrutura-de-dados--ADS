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

/*int enesimo(int pos, Lista L) {
    int count = 0;
    if(pos < 1 || L == NULL) return -1;
    while(count <= pos) {
        if(count == pos) return L->item;
        L = L->prox;
        count++;
    }    
}*/

int enesimo(int pos, Lista L) {// recursiva
    if(pos < 1 || L->prox == NULL) return -1;

    if(pos == 1) return L->item;
    return enesimo(pos-1, L->prox);//a posição é decrementada em 1, e a lista avança em 1 pos. 
                                    //como mantém a proporção, quando a pos==1, o item também será o buscado. Se não -> ERRO
}

int main() {
    Lista A = no(1, no(2, no(1, no(4, no(1, NULL)))));

    exibe(A);
    printf("%d\n", enesimo(5, A));// 1
    
}