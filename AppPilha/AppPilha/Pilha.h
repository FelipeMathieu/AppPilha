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

	//Método de criação
	Pilha *criaPilha(int t);

	Pilha();

	//Método de destrução
	~Pilha();

	int pilhaCheia(Pilha *p);
	void empilha(Pilha *p, char e, int t);
	void imprimePilha(Pilha *p);
	void desempilha(Pilha *p);
	void testaPilha(Pilha *p);
};

