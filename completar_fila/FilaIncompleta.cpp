#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No{
	public:
		char item;
		No *prox;
		No(char n){
			item = n;
			prox = NULL;
		}
};

class Fila{
	public:
		No *inicio;
		No *fim;
		
		Fila(){
			inicio = NULL;
			fim = NULL;
		}
		
		void append(char n){
			if(inicio == NULL){
				inicio = new No(n);
				fim = inicio;
			}
			else{
				No* newNo = new No(n);
				fim->prox = newNo;
				fim = newNo;
			}
		}
		
		char pop(){
			if(inicio != NULL) {
				char item = inicio->item;
				No* aux = inicio;
				inicio = inicio->prox;
				free(aux);
				return item;
			}
			else {
				return -1;
			}
		}
		
		bool isEmpty(){
			return (inicio == NULL);
		}
	
	    void popAll(){
	    	while(!isEmpty()){
				pop();
			}
	    	
		}

};

int main(){
	char item;
	Fila* fila = new Fila;
	
    cout << "Insira 4 elementos\n";
	
	if(fila->isEmpty()){
		for(int i = 0; i < 4; i++) {
			cin >> item;
			fila->append(item);
		}
	}
	else{
		cout << "Fila Cheia\n";
	}

	cout << "Pop: " << fila->pop() << endl;

	if(fila->isEmpty()) {
		cout << "Fila vazia";

	}

	cout << "\npopAll\n\n";
	fila->popAll();

	if(fila->isEmpty()) {
		cout << "Fila Vazia" << endl;
	}
	else{
		cout << "Fila Cheia\n";
	}
}
