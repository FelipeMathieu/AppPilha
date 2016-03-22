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
	//Método de criação
	Pilha();

	//Método de destrução
	~Pilha();
};

