#include <iostream>

using namespace std;


bool binarySearch(int itemProcurado, int vetor[], int numItens, int u) {
    int m = (u + numItens) / 2;

    if (itemProcurado == vetor[m]) {
        return true;
    }

    if (itemProcurado < vetor[m]) {
        numItens = m - 1;
    }
    else {
        u = m + 1;
    }

    if (numItens < u) {
        return false;
    }

    return binarySearch(itemProcurado, vetor, numItens, u);
}

int main() {
    int vetor[] = {16, 5, 30, 55, -5, 2};

    if(binarySearch(32, vetor, 6, 0)){
        cout << "Está no vetor" << endl;
    } 
    else {
        cout << "Está no vetor" << endl;
    }
    
    if(binarySearch(-32, vetor, 6, 0)){
        cout << "Está no vetor" << endl;
    } 
    else {
        cout << "Está no vetor" << endl;
    }

    return 0;
}