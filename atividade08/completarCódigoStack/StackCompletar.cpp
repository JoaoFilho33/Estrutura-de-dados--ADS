#include <stack>
#include <iostream>
using namespace std;

template <class T>

class Stack: public stack<T> {
	protected:
		stack<T> pilha;
	public:
	T popStack(){
		T tmp=pilha.top();
		pilha.pop();
		return tmp;
	}
	
	void popTodos(){
		while(pilha.empty()) {
			cout << pilha.top();
			pilha.pop();
		}
    }
	
	void simulaFila(T novo){
		stack<T> pilha2;

		while(!pilha.empty()) {
		pilha2.push(pilha.top());
		cout << pilha2.top() << endl;
		pilha.pop();
		}

		while(!pilha2.empty()) {
			cout << pilha2.top() << endl;
			pilha2.pop();
		}

		free(&pilha2);
	}
};

int main() {
	Stack<int> fila;

	fila.simulaFila(1);
	fila.simulaFila(2);
	fila.simulaFila(3);
	fila.simulaFila(4);
	fila.simulaFila(5);
	
	fila.popTodos();
}