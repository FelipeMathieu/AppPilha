#include "Pilha.h"
#include <Windows.h>
#include "Expressao.h"
#include<string>

int main()
{
	int tamanho;
	Pilha *pilha = NULL;
	char e;
	int aux = 0;
	string n;

	cout << "Informe a expressao da sua pilha:" << endl;
	getline(cin, n);
	pilha = pilha->criaPilha(n.length());

	if (n.length() != 0)
	{
		for (int i = 0; aux != 1; i++)
		{
			e = n[i];
			pilha->empilha(pilha, e, n.length());
			if (pilha->pilhaCheia(pilha))
			{
				aux++;
			}
		}
	}
	else
	{
		cout << "PILHA VAZIA!" << endl;
		return 0;
	}

	pilha->testaPilha(pilha);

	cout << endl;
	pilha->imprimePilha(pilha);

	pilha->desempilha(pilha);

	pilha->imprimePilha(pilha);

	cout << endl;

	return 0;
}