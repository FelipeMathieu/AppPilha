#include "Pilha.h"

using namespace std;

Pilha::Pilha()
{
}

Pilha::~Pilha()
{
}

int Pilha::pilhaCheia(Pilha *p)
{
	if (p->topo == p->MAX - 1)
	{
		cout << "\nPILHA CHEIA!" << endl;
		return 1;
	}
	else
	{
		return 0;
	}
}

void Pilha::empilha(Pilha *p, char e, int t)
{
	if (!pilhaCheia(p) && t == p->MAX)
	{
		p->topo = p->topo + 1;
		p->dado[p->topo] = e;
	}
	else if(!pilhaCheia(p) && t < p->MAX)
	{
		p->MAX = p->MAX + 1;
		p->topo = p->topo + 1;
		p->dado[p->topo] = e;
	}
}

void Pilha::imprimePilha(Pilha *p)
{
	int a = p->topo;

	cout << "Elementos:" << endl;

	for (int i = 0; i < p->MAX; i++)
	{
		if (p->dado[i] != NULL)
		{
			cout << p->dado[a] << endl;
			a = a - 1;
		}
	}
}

Pilha *Pilha::criaPilha(int t)
{
	Pilha *p = (Pilha *)malloc(sizeof(Pilha));

	p->topo = -1;
	p->MAX = t;
	*p->dado = (char) malloc(sizeof(p->MAX));

	return p;
}

void Pilha::desempilha(Pilha *p)
{
	int n = p->MAX;

	cout << "Desempilha elemento: " << p->dado[p->topo] << endl;

	if (p->MAX > 0)
	{
		for (int i = 0; i < p->MAX; i++)
		{
			n = n - 1;
			p->dado[p->MAX - i] = p->dado[n];
			p->dado[n] = NULL;
		}
	}
	else
	{
		p->pilhaCheia(p);
	}
}

void Pilha::testaPilha(Pilha *p)
{
	Expressao *x = NULL;

	x = x->criaExpressao();

	for (int i = 0; i < p->MAX; i++)
	{
		x->testaExpressao(p->dado[i], x);
	}
	
	if (!x->expressaoValida(x))
	{
		cout << "\nEXPRESSAO INVALIDA" << endl;
	}
	else
	{
		cout << "\nEXPRESSAO VALIDA" << endl;
	}
}