#include <stdio.h>
#include <stdlib.h>

//lista duplamente encadeada

typedef struct no {
    int valor;
    struct no *prox;
    struct no *ant;
}No;

void inserirInicio(No **lista, int num) {
    No *novo = malloc(sizeof(No));

    if(novo) {
        novo->valor = num;
        novo->prox = *lista;
        novo->ant = NULL;

        if(*lista) {//lista != nulo
            (*lista)->ant = novo;
        }
        *lista = novo;
    }
    else {
        printf("Erro ao alocar memória!");
    }
}

void inserirFim(No **lista, int num) {
    No *aux, *novo = malloc(sizeof(No));

    if(novo) {
        novo->valor = num;
        novo->prox = NULL;

        //é o primeiro nó?
        if(*lista == NULL) {
            *lista = novo;
            novo->ant = NULL;
        }
        else {
            aux = *lista;
            while(aux->prox) {
                aux = aux->prox;
            }
            aux->prox = novo;
            novo->ant = aux;
        }
    }   
    else {
        printf("Erro ao alocar memória!");
    }
}

void inserirMeio(No **lista, int num, int ant) {
    No *aux, *novo = malloc(sizeof(No));

    if(novo) {
        novo->valor = num;
        //é o primeiro?
        if(*lista == NULL) {
            novo->prox = NULL;
            *lista = novo;
        }
        else {
            aux = *lista;
            while(aux->valor != ant && aux->prox) {
                aux = aux->prox;
            }
            novo->prox = aux->prox;
            aux->prox->ant = novo;
            novo->ant = aux;
            aux->prox = novo; 
        }
    } 
    else {
        printf("Erro ao alocar memória!");
    }
}

void inserirOrdenado(No **lista, int num) {
    No *aux, *novo = malloc(sizeof(No));

    if(novo) {
        novo->valor = num;
        //lista vazia?
        if(*lista == NULL) {
            novo->prox = NULL;
            novo->ant = NULL;
            *lista = novo;
        }//é o menor?
        else if(novo->valor < (*lista)->valor) {
            novo->prox = *lista;
            (*lista)->ant = novo;
            *lista = novo;
        }
        else {//se está no meio
            aux = *lista;
            while(aux->prox && novo->valor > aux->prox->valor) {
                aux = aux->prox;
                
            }
            novo->prox = aux->prox;
            aux->prox->ant = novo;//o no anterior ao proximo aponta para o novo
            novo->ant = aux;
            aux->prox = novo; 
        }
    }
    else {
        printf("Erro ao alocar memória!");
    }
}

No* remover(No **lista, int num) {
    No *aux, *remover = NULL;

    if(*lista) {
        if((*lista)->valor == num) {
            remover = *lista;
            *lista = remover->prox;
            if(*lista) {
                (*lista)->ant = NULL;
            }
        }
        else {
            aux = *lista;
            while(aux->prox && aux->prox->valor != num) {
                aux = aux->prox;
            }
            if(aux->prox) {
                remover = aux->prox;
                aux->prox = remover->prox;
                if(aux->prox) {
                    aux->prox->ant = aux;
                }
            }
        }
    }
    return remover;
}

void imprimir(No *no) {
    printf("\n\tlista: ");
    while(no) {
        printf("%d", no->valor);
        no = no->prox;
    }
    printf("\n\n");
}

No* ultimo(No **lista) {
    No *aux = *lista;
    while(aux->prox) {
        aux = aux->ant;
    }
    return aux;
}

void imprimirFimInicio(No *no) {
    printf("\n\tlista: ");
    while(no) {
        printf("%d", no->valor);
        no = no->ant;
    }
    printf("\n\n");
}

int main(){
   int opcao, valor, anterior;
   No *removido, *lista = NULL;

   do{
        printf("\n\t0 - Sair\n\t1 - Inserir\n\t2 - inserirF\n\t3 - inserirM\n\t4 - inserirO\n\t5 - Remover\n\t6 - imprimir\n\t7 - buscar\n\t8 - imprimirC\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                inserirInicio(&lista, valor);
                break;
            case 2:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                inserirFim(&lista, valor);
                break;
            case 3:
                printf("Digite um valor e a referencia: ");
                scanf("%d", &valor);
                inserirMeio(&lista, valor, anterior);
                break;
            case 4:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                inserirOrdenado(&lista, valor);
                break;
            case 5:
                printf("Digite um valor para ser removido: ");
                scanf("%d", &valor);
                removido = remover(&lista, valor);
                if(removido) {
                    printf("Elemento removido: %d\n", removido->valor);
                    free(removido);
                }
                else {
                    printf("Elemento não existe!");
                }
                break;
            case 6:
                imprimir(&lista);
                break;
            case 7:
                printf("Digite um valor para ser buscado: ");
                scanf("%d", &valor);
                removido = buscar(&lista, valor);
                if(removido) {
                    printf("Elemento encontrado: %d\n", removido->valor);
                }
                else {
                    printf("Elemento não existe!");
                }
                break;
            case 8:
                imprimirFimInicio(ultimo(&lista));
                break;
        default:
            if(opcao != 0) {
                printf("Opção inválida!");
            }
        }
    }while(opcao != 0);
}
