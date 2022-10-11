#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct aluno{
	int mat;
	string nome;	
}Aluno; 

Aluno lista[30];
int count = 0;


//retorna a posicao do elemento procurado
int procura(int mat){	
	for(int i = 0; i <= count; i++) {
		if(lista[i].mat == mat) {
			return i;
		}
	}
	return -1;
}

void incluirDesordenado(Aluno aluno){
	if(procura(aluno.mat) == -1) {
		lista[count] = aluno;
		count++;
	}
	else {
		cout << "Aluno Já cadastrado!!";
	}
}

//recebe a posicao e imprime o elemento na tela
void mostrar(int pos){
	cout << "-----" << endl;
	cout << "Aluno: " << lista[pos].nome << endl;
	cout << "Matrícula: " << lista[pos].mat << endl;
}

//procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa q ele nao existe)
void consultar(int mat){	
	int i, matProcura, achou, cont;

	do {
		cout << "Consultar aluno por Matrícula\n\n";
		cout << "- Matrícula: ";
		cin >> matProcura;
		achou = procura(matProcura);

		if(achou != -1) {
			mostrar(achou);
		}
		else {
			cout << "Aluno não encontrado!\n"; 
		}

		cout << "Consultar outro aluno? (1-sim, 2-não)" << endl;
		cin >> cont;
	}	
	while(cont == 1);
}

//estrat�gia 1: colocar o ultimo elemento da lista na posi��o do elemento removido
void remover00(int mat){
	int pos = procura(mat);

	lista[pos] = lista[count];
	free(&lista[count]);
	count--;
}

//estrat�gia 2: mover TODOS os elementos que est�o AP�S  o elemento que deve ser removido UMA POSI��O A FRENTE.
void remover01(int mat){
	int pos = procura(mat);

	if(pos != -1) {
		for(int i = pos; i <= count; i++) {
			lista[i] = lista[i+1];
		}
		free(&lista[count]);
		count--;
	}
}


void exibirAllmat() {
	for(int i = 0; i < count; i++) {
		cout << lista[i].mat << endl;
	}
}


int main(){
	Aluno aluno1;
	aluno1.mat = 1;
	aluno1.nome = "João";
	Aluno aluno2;
	aluno2.mat = 2;
	aluno2.nome = "Carlos";
	Aluno aluno3;
	aluno3.mat = 3;
	aluno3.nome = "Cristóvão";
	Aluno aluno4;
	aluno4.mat = 4;
	aluno4.nome = "Chico";

	incluirDesordenado(aluno1);
	incluirDesordenado(aluno2);
	incluirDesordenado(aluno3);
	incluirDesordenado(aluno4);

	exibirAllmat();
	cout << "\n\n";

	remover00(3);
	exibirAllmat();
	cout << "\n\n";

	remover01(2);
	exibirAllmat();
	cout << "\n\n";

	consultar(4);
	
}