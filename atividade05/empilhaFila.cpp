#include <iostream>
#include "filaClasse.hpp"
#include <cctype>

using namespace std;

int main() {
    Fila* f1 = new Fila();
    Fila* f2 = new Fila();

    int resp;
    char letra;
    int countLetra = 0;

    do{
        cout << "Digite a letra: \n";
        cin >> letra;

        if(f1->isEmpty()) {
            f1->append(letra);
        }
        else{
            while(f1->isEmpty() == false) {
                f2->append(f1->pop());
            }
        }

        f1->append(letra);

        while(f2->isEmpty() == false) {
            f1->append(f2->pop());
        }

        cout << "Deseja continuar? (1-sim 2-não)";
        cin >> resp;
        countLetra++;
    } while(resp == 1);


    for(int i = 0; i < countLetra; i++) {
        cout << f1->pop() << endl;
    }
}