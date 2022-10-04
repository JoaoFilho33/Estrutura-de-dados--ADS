#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

typedef char Itemp;

class no
{
public:
	Itemp item;
	no *prox;
	no(Itemp n)
	{
		item = n;
		prox = NULL;
	}
};

class Pilha
{
public:
	no *topo;

	Pilha()
	{
		topo = NULL;
	}

	void push(char n)
	{
		no *newNo = new no(n);

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

	Itemp pop()
	{
		if (isEmpty())
		{
			return -1;
		}
		else
		{
			no *aux = topo;
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