#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No
{
public:
	char item;
	No *prox;
	No(char n)
	{
		item = n;
		prox = NULL;
	}
};

class Pilha
{
public:
	No *topo;

	Pilha()
	{
		topo = NULL;
	}

	void push(char n)
	{
		No *newNo = new No(n);

		if (isEmpty())
		{
			topo = newNo;
		}
		else
		{
			newNo->prox = topo;
			topo = newNo;
		}
	}

	char pop()
	{
		if (isEmpty())
		{
			return -1;
		}
		else
		{
			No *aux = topo;
			topo = topo->prox;
			char item = aux->item;
			free(aux);
			return item;
		}
	}

	int isEmpty()
	{
		return topo == NULL;
	}

	int isFull()
	{
		return topo != NULL;
	}
};

int main()
{
	char item;
	Pilha *pilha = new Pilha;

	cout << "Insira 4 elementos" << endl;

	if (pilha->isEmpty())
	{
		for (int i = 0; i < 4; i++)
		{
			cin >> item;
			pilha->push(item);
		}
	}
	else
	{
		cout << "Pilha cheia";
	}

	while (pilha->isFull())
	{
		cout << "Pop: " << pilha->pop() << endl;
	}

	if (pilha->isEmpty())
	{
		cout << "\nPilha Vazia" << endl;//<< pilha->isEmpty() << endl;
	}
}