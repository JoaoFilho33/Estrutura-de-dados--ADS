#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class No{
	public:
		int mat;
		char nome[23];
		No *prox;
		No(int m, char n[23]){
			mat=m;
			strcpy(nome,n);			
			prox=NULL;
		}
};

class Lista{
	public:
		No *inicio;
		No *fim;
	
	    Lista(){
	    	inicio = NULL;
	    	fim = NULL;
		}	
		void addToFinal(int m, char n[23]){
			No *novo= new No(m,n);
			if (fim==NULL){
				inicio = novo;
				fim = novo;
			}
			else{
				fim->prox=novo;
				fim=novo;
			}
		}
		
			
		int lst_vazia(){
			return (inicio==NULL);
		}

		void addToInicio(int m,char n[23]){
			No *novo = new No(m, n);
			novo->prox = inicio;
			inicio = novo;			
		}

		void mostra(){
			//int i = 0;
			if (lst_vazia()){
				cout<<"\nLista vazia!!!";
			}
			else{
				No *tmp = inicio;

				while(tmp != NULL) {
					cout << "Mat: " << tmp->mat << endl;
					cout << "Nome: " << tmp->nome << endl;
					cout << endl;
					tmp = tmp->prox;
				}
			}				
		}

		void remove(int mat){
			 if(!lst_vazia()) {
				No *novo = inicio;
				No *oldHead = NULL;

				while(novo != NULL) {
					if(novo->mat == mat) {
						if(fim==novo) {
							fim=oldHead;
						}
						oldHead->prox = novo->prox;
						free(novo);
						novo = novo->prox;
					}
					oldHead = novo;
					novo = novo->prox;
				}
			 }
			 else {
				cout << "Lista Vazia" << endl;
			 }
		}
		
		// auxiliar no metodo remove, vai 
		//retornar o endereco do anterior
		/*No *busca(int mat){
			
		}*/
		
		void removeTodos(){
			No *atual=inicio;
			No *proximo=NULL;
			while (atual!=NULL){
					proximo=atual->prox;
					cout<<"\n Apaga:"<<atual->nome;
					free(atual);
					atual=proximo;						
			}
			inicio=atual;
		}
		
		// criar uma nova lista que seja o inverso da primeira
		void crialistainversa(){
				
		}
		
		//inverter a propria lista
		void listainvertida(){
				if(!lst_vazia()) {
					No *novo = inicio;
					No *prox = novo->prox;
					No *oldHead = NULL;

					novo->prox = NULL;
					fim = inicio;

					while(prox != NULL) {
						oldHead = novo;
						novo = prox;
						prox = novo->prox;

						novo->prox = oldHead;

						if(prox == NULL) {
							inicio = novo;
						}
					}

				}
		}
};

int main(){
   Lista *l = new Lista();

   char nome1[] = "Joao" ;
   char nome2[] = "Gabriela" ;
   char nome3[] = "Fabiola" ;
   char nome4[] = "Joana Oliveira" ;
   char nome5[] = "Cristiano Oliveira" ;


   l->addToFinal(1, nome1);
   l->addToFinal(2, nome2);
   l->addToFinal(3, nome3);
   l->addToInicio(4, nome4);
   l->addToInicio(5, nome5);
   l->mostra();
 
   l->listainvertida();
   l->mostra();

   

}
