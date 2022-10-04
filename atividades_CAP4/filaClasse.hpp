#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

typedef char Itemf;

class No{
	public:
		Itemf item;
		No* prox;
		No(Itemf n){
			item = n;
			prox = NULL;
		}
};

class Fila{
	public:
		No* inicio;
		No* fim;
		
		Fila(){
			inicio = NULL;
			fim = NULL;
		}
		
		void append(Itemf n){
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
				Itemf item = inicio->item;
				No* aux = inicio;
				inicio = inicio->prox;
				free(aux);
				return item;
			}
			else {
				return '\0';
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