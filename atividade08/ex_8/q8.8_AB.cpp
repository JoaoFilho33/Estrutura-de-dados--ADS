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

int main() {
    //A
    int v[] = {72,69,51,46,33,28,15};// => 15-28-33-46-51-69-72

    //B
    //int v[] = {46,28,51,33,72,15,69};// => 15-28-33-46-51-69-72

    quick_sort(v, 0, 6);

    for(int i = 0; i < 7; i++) {
        cout << v[i] << "-";
    }
}