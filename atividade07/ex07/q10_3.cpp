#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct No {
    int item;
    struct No *prox;
    struct No *ant;
} *Lista;

Lista no(int item, No *prox) {
    Lista lista = (Lista)malloc(sizeof(Lista));

    lista->item = item;
    lista->prox = prox;

    return lista;
}

void inserirOrd(int item, Lista *lista) {
    No *aux, *novo = (Lista)malloc(sizeof(Lista));

    if(novo) {
        novo->item = item;
        //lista vazia?
        if(*lista == NULL) {
            novo->prox = NULL;
            *lista = novo;
        }//é o menor?
        else if(novo->item < (*lista)->item) {
            novo->prox = *lista;
            *lista = novo;
        }
        else {//se está no meio
            aux = *lista;
            while(aux->prox && novo->item > aux->prox->item) {
                aux = aux->prox;
                
            }
            novo->prox = aux->prox;
            aux->prox = novo; 
        }
    }
}

int existe(int item, Lista lista) {
    while(lista != NULL && lista->item < item) {
        lista = lista->prox;
    }
    return lista != NULL && lista->item == item;
}

void insSR(int item, Lista *lista) {
    if(existe(item, *lista)) {
        cout << "" << item << " já está na lista!!" << endl;
    }
    else {
        inserirOrd(item, lista);
    }
}

void imprimir(No *no) {
    printf("\n\tlista: ");
    while(no) {
        cout << "" << no->item;
        no = no->prox;
    }
    printf("\n\n");
}

int main() {

    Lista lista = no(1, no(2, no(3, no(4, NULL))));
    insSR(1, &lista);
    insSR(1, &lista);
    insSR(4, &lista);
    insSR(7, &lista);
    imprimir(lista);
}