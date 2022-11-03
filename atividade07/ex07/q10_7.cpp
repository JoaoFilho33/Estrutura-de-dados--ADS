#include <iostream>
#include <cmath>

using namespace std;

typedef struct poli {
    float coef;
    int expo;
    struct poli *prox;
    
} *Poli;

Poli termo(float c, int e, Poli prox) {
    Poli n = (poli*)malloc(sizeof(struct poli));
    n->coef = c;
    n->expo = e;
    n->prox = prox;

    return n;
}


void addt(float c, int e, Poli *P) {
    if(*P == NULL || (*P)->expo < e) {
        *P = termo(c, e, *P);
    } else if((*P)->expo == e) {
        (*P)->coef += c;
        if((*P)->coef == 0) {
            Poli n = *P;
            *P = n->prox;
            free(n);
        }
    } else {
        addt(c, e, &(*P)->prox);
    }
}

void somarPolinomios(Poli *poli1, Poli poli2) {
    if(poli2 == NULL) return;
    addt(poli2->coef, poli2->expo, poli1);
    somarPolinomios(poli1, poli2->prox);
}

void exibirPolinomio(Poli poli) {
    if(poli == NULL) return;
    printf("%+.1f", poli->coef);
    if(poli->expo != 0) printf("*x^%d", poli->expo);
    exibirPolinomio(poli->prox);
}

int main() {
    Poli poli1 = termo(2, 4, termo(3, 3, termo(6, 2, NULL)));
    Poli poli2 = termo(7, 5, termo(4, 4, termo(2, 3, termo(3, 2, NULL))));
    somarPolinomios(&poli1, poli2);

    exibirPolinomio(poli1);
}