#pragma once

#include<iostream>

using namespace std;

class Expressao
{
	int countP, countC, countCh;
public:
	//M�todo de cria��o
	Expressao();
	Expressao *criaExpressao();

	//M�todo de destru��o
	~Expressao();

	void testaExpressao(char e, Expressao *x);
	int expressaoValida(Expressao *x);
};

