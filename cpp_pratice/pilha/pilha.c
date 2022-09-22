//#include <iostream>
#include <stdio.h>

//using namespace std;

typedef char Itemp;

typedef struct pilha {
    int max;
    int topo;
    Itemp *item;
} *Pilha; 

Pilha pilha(int m){
    Pilha p = malloc(sizeof(struct pilha));
    p -> max = m;
    p -> topo = -1;
    p -> item = malloc(m*sizeof(Itemp));
    return p;
}
