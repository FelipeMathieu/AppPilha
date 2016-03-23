#include "Expressao.h"

Expressao::Expressao()
{
}

Expressao::~Expressao()
{
}

void Expressao::testaExpressao(char e, Expressao *x)
{
	if (e == '(' || e == ')')
	{
		x->countP = x->countP + 1;
	}
	else if (e == '[' || e == ']')
	{
		x->countC = x->countC + 1;
	}
	else if (e == '{' || e == '}')
	{
		x->countCh = x->countCh + 1;
	}
}

int Expressao::expressaoValida(Expressao *x)
{
	if (x->countP % 2 == 0 && x->countCh % 2 == 0 && x->countC % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

Expressao *Expressao::criaExpressao()
{
	Expressao *x = (Expressao *)malloc(sizeof(Expressao));
	x->countC = 0;
	x->countP = 0;
	x->countCh = 0;

	return x;
}