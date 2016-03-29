#pragma once

#include<iostream>

using namespace std;

class Expressao
{
	int countP, countC, countCh;
public:
	//Método de criação
	Expressao();
	Expressao *criaExpressao();

	//Método de destrução
	~Expressao();

	void testaExpressao(char e, Expressao *x);
	int expressaoValida(Expressao *x);
};

