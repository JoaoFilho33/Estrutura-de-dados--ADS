#include <iostream>

using namespace std;

#define troca(a, b) {int x = a; a = b; b = x;}

int particiona (int v[], int p, int u) {
    int x = v[p];
    p--;
    u++;
    while(p<u) {
        do u--; while( v[u]>x );
        do p++; while( v[p]<x );

        if( p<u ) troca(v[p], v[u]);
    }
    return u;
}

void quick_sort(int v[], int p, int u) {
    if( p>=u ) return; 
    int m = particiona(v, p, u);
    quick_sort(v, p, m);
    quick_sort(v, m+1, u);
}

// A análise do pior caso nos mostra o limite superior de consumo de tempo do algoritmo.

/* o pior caso desse algoritmo acontece de forma exponencial o(n^2), e para isso o vetor deve conter
todos os elementos diferentes e inicialmente dispostos aleatoriamente.
*/