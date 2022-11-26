#include <iostream>

using namespace std;

#define troca(a,b) { int x=a; a=b; b=x;}

int seleciona(int vetor[], int numElementos) {
    int i = 0;
    for(int j = 1; j < numElementos; j++){
        if(vetor[i] < vetor[j]) {
            i = j;
        }
    }
    return i;
}

void selectionSort(int v[], int n){
    if(n == 0) return;
    troca(v[seleciona(v, n)], v[n-1]);
    n--;
    selectionSort(v, n);    
}

int main() {
    int vetor[] = {16, 5, 30, 55, -5, 2};
    selectionSort(vetor, 6);

    for(int i = 0; i < 6; i++) {
        cout << vetor[i] << endl;
    }

    return 0;
}