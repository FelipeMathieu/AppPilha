#pragma once

#include<stdlib.h>
#include<stdio.h>

using namespace std;

class Pilha
{

private:
	int topo = -1;
	int MAX;
	int dado[];

public:
	//M�todo de cria��o
	Pilha();

	//M�todo de destru��o
	~Pilha();
};

