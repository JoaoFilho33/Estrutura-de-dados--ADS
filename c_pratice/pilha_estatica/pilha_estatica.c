#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100

typedef struct {
    int Item[MAXTAM];
    int Topo;

} TPilha;

void TPilha_Inicia (TPilha *p) {
    p->Topo = -1; //-1 é um valor que determina que a pilha está vazia
}

int TPilha_Vazia (TPilha *p) {
    if(p->Topo == -1) {
        return 1;
    } else {
        return 0;
    }
}

int TPilha_Cheia (TPilha *p) {
    if(p->Topo == MAXTAM-1) {//Topo guarda o índice do vetor. logo se é 100-1, está cheio
        return 1;
    } else {
        return 0;
    }
}

void TPilha_Insere (TPilha *p, int x) {
    if(TPilha_Cheia(p) == 1) {
        printf("Pilha Cheia");
    } else {
        p->Topo++;//p->Topo informa que o valor será inserido na proxima posição vaga do vetor, ou seja, topo+1
        p->Item[p->Topo] = x;//aqui o topo já é a posição vazia, e por isso o Item na posição p->Topo recebe x
    }
}

int TPilha_Remove (TPilha *p) {
    int aux;
    if(TPilha_Vazia(p) == 1) {
        printf("Pilha Vazia");
    } else {
        aux = p->Item[p->Topo];
        p->Topo--;//se o topo for removido, a posição topo não é mais o topo, e sim Topo--
        return aux; //aux recebe o valor que estava no topo
    }
}

int main() {
    TPilha *p = (TPilha*)malloc(sizeof(TPilha));
    TPilha_Inicia(p);

    TPilha_Insere(p, 1);
    TPilha_Insere(p, 2);
    TPilha_Insere(p, 3);

    int aux;
    
    aux = TPilha_Remove(p); //aux recebe o valor que foi removido da pilha
    printf("\n SAIU: %d", aux);
    printf("\n");

}