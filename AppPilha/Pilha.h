#pragma once

#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include "Expressao.h"

using namespace std;

class Pilha
{

private:
	int topo;
	int MAX;
	char dado[];

public:

	//M�todo de cria��o
	Pilha *criaPilha(int t);

	Pilha();

	//M�todo de destru��o
	~Pilha();

	int pilhaCheia(Pilha *p);
	void empilha(Pilha *p, char e, int t);
	void imprimePilha(Pilha *p);
	void desempilha(Pilha *p);
	void testaPilha(Pilha *p);
};

