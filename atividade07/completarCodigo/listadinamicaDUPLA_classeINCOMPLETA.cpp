#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class No{
	public:
		int mat;
		char nome[23];
		No *prox;
		No *ant;
		No(int m,char n[23]){
			mat=m;
			strcpy(nome,n);
			prox=NULL;
			ant=NULL;
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
			No *novo = new No(m, n);
			if(novo) {
       			if(fim) {
        			fim->prox = novo;
					novo->ant = fim;
					fim = novo;
        		}
        		else {//é o primeiro nó, e add inicio
					fim = novo;
					inicio = novo;
        		}
    		}   
    		else {
        		printf("Erro ao alocar memória!");
    		}
		}
	
		void addToIni(int m, char n[23]){
			No *novo = new No(m, n);
		
			if(novo) {
        		if(inicio) {//inicio != nulo
            		novo->prox = inicio;
            		inicio->ant = novo;
            		inicio = novo;
        		}
				else {
					fim = novo;
					inicio = novo;
				}
    		}
    		else {
        		printf("Erro ao alocar memória!");
    		}
		}
		
		void addOrd(int m, char n[23]){
			No* novo = new No(m, n), *aux;

			//if(novo) {
        		//vazio?
        		if(inicio == NULL) {
            		inicio = novo;
					fim = novo;
        		}//se tem apenas um elemento
				else if(inicio == fim) {
					if(m < inicio->mat) {
						addToIni(m, n);
					}
					else {
						addToFinal(m, n);
					}
				}
        		else {//se esta no meio
            		aux = inicio;
            		while(aux->prox && novo->mat > aux->prox->mat) {
                		aux = aux->prox;  
            		}
            		novo->prox = aux->prox;
            		aux->prox->ant = novo;//o no anterior ao proximo aponta para o novo
            		novo->ant = aux;
            		aux->prox = novo; 
        		}
    		//}
    		/*else {
        		printf("Erro ao alocar memória!");
    		}*/
		}
	
		
		//mostra todos os elementos do inicio ao final da lista
		void mostraIniFim(){
			No *info = inicio;

			if(inicio == NULL) {
				cout << "Lista Vazia!";
			}
			else {
				printf("\n\tlista: ");

    			while(info) {
        			cout << "Mat: " << info->mat << endl;
					cout << "Nome: " << info->nome << endl;
					cout << endl;
        			info = info->prox;
    			}
				free(info);
    			cout << "\n\n";
			}
		}

		// mostra todos os elementos do final ao inicio da lista
		void mostraFimIni() {
			No *info = fim;

			if(fim == NULL) {
				cout << "Lista Vazia!";
			}
			else {
				printf("\n\tlista: ");

    			while(info) {
        			cout << "Mat: " << info->mat << endl;
					cout << "Nome: " << info->nome << endl;
					cout << endl;
        			info = info->ant;
    			}
				delete(info);
    			cout << "\n\n";
			}
		}

		No* ultimo(No **lista) {
    		No *aux = *lista;
    		while(aux->prox) {
        		aux = aux->ant;
    		}
    		return aux;
		}
	
		int removerFinal() {
			No *info = fim;
			fim = fim->ant;
			delete(info);
			return info->mat;
		}
		
		int removerInicio() {
			No *info = inicio;
			inicio = inicio->prox;
			delete(info);
			return info->mat;
		}

		int remover(int m){
			No *aux;

				if(inicio->mat == m) {
					removerInicio();
				}
				else if(fim->mat == m) {
					removerFinal();
				}
				else {
					aux = inicio;
					while(aux->prox && aux->prox->mat != m) {
						return 0;
						aux = aux->prox;
					}
					if(aux->prox) {
						aux->ant->prox = aux->prox;
						aux->prox->ant = aux->ant;
						delete(aux);
					}
				}
				return 1;
    	}
};

int main(){
   Lista *l=new Lista();
   
   l->addOrd(1,"Joana Oliveira");
   l->addOrd(10,"Cristiano Oliveira");
  // l->mostra();
   l->addOrd(8,"Joao");
   l->addOrd(4,"Fabio");
   l->mostraIniFim(); 
  // l->mostraFimIni();	
   if (l->remover(4)==1)
       cout<<"Elemento removido!!";
   else
       cout<<"Elemento nao encontrado!!";    
   l->mostraIniFim();
	
}