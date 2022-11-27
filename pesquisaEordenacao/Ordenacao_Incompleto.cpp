#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>


using namespace std;

typedef struct aluno {
	int matricula;
	char nome[20]; 
	//string nome;
}Aluno;


void ord_insercao(Aluno v[],int tam) {
	for(int i = 0; i < tam; i++) {
		Aluno aux = v[i];  
		while (i > 0 &&  aux.matricula < v[i - 1].matricula) {
			v[i] = v[i - 1];
			i--;
		}
		v[i] = aux;
    }
};

void selection_sort(Aluno v[],int n) {
	while(n > 1) {
		int indice = 0;
		for(int j = indice; j < n; j++) {
			if(strcmp(v[indice].nome, v[j].nome) == -1) indice = j;
		}

		Aluno aux = v[indice];
		v[indice] = v[n - 1];
		v[n-1] = aux;
		n--;
    }
};

void bubble_sort(Aluno v[],int n) {
	for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(v[j].matricula > v[j + 1].matricula) {
				Aluno aux = v[j]; 
				v[j] = v[j + 1];
				v[j + 1] = aux;
            }
        } 
    }
};

void printVet(Aluno v[], int tam) {
	for(int i = 0; i < tam; i++) {
		cout << v[i].nome << "(" << v[i].matricula << ")" << endl;
	}

	cout << "**************************" << endl;
}


Aluno myarray[3];
	
int main(){
	Aluno alunoA;
	cout << "Nome aluno A: ";
	cin >> alunoA.nome;
	cout << "Matrícula aluno A: ";
	cin >> alunoA.matricula;

	Aluno alunoB;
	cout << "Nome aluno B: ";
	cin >> alunoB.nome;
	cout << "Matrícula aluno B: ";
	cin >> alunoB.matricula;

	Aluno alunoC;
	cout << "Nome aluno C: ";
	cin >> alunoC.nome;
	cout << "Matrícula aluno C: ";
	cin >> alunoC.matricula;

	cout << "***********************" << endl;

	myarray[0] = alunoA;
	myarray[1] = alunoB;
	myarray[2] = alunoC;

	selection_sort(myarray, 3);
	printVet(myarray, 3);

	bubble_sort(myarray, 3);
	printVet(myarray, 3);

	ord_insercao(myarray, 3);
	printVet(myarray, 3);
}