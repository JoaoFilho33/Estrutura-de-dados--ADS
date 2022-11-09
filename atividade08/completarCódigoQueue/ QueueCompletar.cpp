#include <queue>
#include <iostream>
using namespace std;

template <class T>
class Queue: public queue<T> {
	protected:
		queue<T> fila;
	public:
	T popQueue(){
		T tmp=fila.front();
		fila.pop();
		return tmp;
	}
	
	
	void popTodos(){				
		while(!_fila.empty()) {
			cout << popQueue() << endl;
		} 
    }
    
    void simulaPilha(T novo){
		_fila.push(novo);
		while (_fila.front() != novo) {
			_fila.push(popQueue());
		} 
    }
};

int main(){
	Queue<int> fila;

	fila.push(4);
	fila.push(5);

	fila.simulaPilha(1);
	fila.simulaPilha(2);
	fila.simulaPilha(3);
	fila.simulaPilha(4);
	fila.simulaPilha(5);

	cout<<fila.front()<<endl;

	fila.popTodos();
}
