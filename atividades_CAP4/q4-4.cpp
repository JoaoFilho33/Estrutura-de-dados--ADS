#include <stdio.h>
#include "filaClasse.hpp"
#define tempo 3

using namespace std;

int main() {
    Fila* f = new Fila();

    f->append(17);
    f->append(25);
    f->append(39);
    f->append(46);
    
    while(f->isEmpty() == false){
        int x = f->pop();
        int p = x/10;
        int t = x%10;
        if(t>3){
            f->append(p*10+(t-tempo));
        } 
        else {
            cout << x << "Processo concluído\n";
        }
    }
}

//saída: 22 -> 43 -> 11 -> 33
//ordem de conclusão: 17 -> 25 -> 46 -> 39 