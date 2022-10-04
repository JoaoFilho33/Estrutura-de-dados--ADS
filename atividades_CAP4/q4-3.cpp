#include <stdio.h>
#include <ctype.h>
#include "./filaClasse.hpp"
#include "./pilhaClasse.hpp"

using namespace std;

int main() {
    string texto;
   Fila* f = new Fila();
   Pilha* p = new Pilha();

    cout << "Frase: ";
    getline(cin, texto);

    for(int i = 0; i < texto.length(); i++) {
        if(isalpha(texto[i])) {
            f->append(toupper(texto[i]));
            p->push(toupper(texto[i]));
        }
    }

    while(f->isEmpty() == false && f->pop() == p->pop());
       
     if(f->isEmpty()) {
            cout << "A frase é palíndroma\n";
        }
        else{
            cout << "A frase não é palíndroma\n";
        }

}