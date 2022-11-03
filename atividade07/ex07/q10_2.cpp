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

void inverso(Lista lista) {
    if(lista == NULL) {
        return;
    }
    inverso(lista->prox);
	cout << lista->item << endl;
}

int main() {
    Lista lista = nullptr;
    
    inserirOrd(1, &lista);
    inserirOrd(4, &lista);
    inserirOrd(3, &lista);

    inverso(lista);//4 3 1
}