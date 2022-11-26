#include <iostream>

using namespace std;


void insere(char item, int vetor[], int numItem) {
    while(numItem > 0 && item < vetor[numItem - 1]){
        vetor[numItem] = vetor[numItem-1];
        numItem--;
    }

    vetor[numItem] = item; 
}

void insertionSort(int vetor[], int numItem, int i){
    if(i == numItem) return;
    insere(vetor[i], vetor, i);
    insertionSort(vetor, numItem, i+1);
}

int main() {
    int vetor[] = {16, 5, 30, 55, -5, 2};
    insertionSort(vetor, 6, 0);

    for(int i = 0; i < 6; i++) {
        cout << vetor[i] << endl;
    }

    return 0;
}