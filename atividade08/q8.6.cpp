#include <iostream>


using namespace std;

bool linearSearch(int item, int vetor[], int numItem){
    if(item == vetor[numItem]){
        return true;
    }
    numItem--;

    if(numItem == 0){
        return false;
    }

    return linearSearch(item, vetor, numItem);     
}


int main(){
    int vetor[] = {15, 2, 25, -32, 48, 5};

    if(linearSearch(32, vetor, 6)){
        cout << "Está no vetor" << endl;
    } 
    else {
        cout << "Está no vetor" << endl;
    }
    
    if(linearSearch(-32, vetor, 6)){
        cout << "Está no vetor" << endl;
    } 
    else {
        cout << "Está no vetor" << endl;
    }
}