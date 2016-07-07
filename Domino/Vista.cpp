#include "stdafx.h"
#include "Vista.h"
//#include "Consola.h"
//#include "Archivo.h"
#include <iostream>
using namespace std;

Vista::Vista()
{
}

void Vista::imprimir(char* joe) {
	joe = "mah boi!";
}

int* Vista::recivir(int joe) {
	//Esto no sirve para absolutamente nada!
	joe = 1234;
	int* nai = new int[1];
	nai[0] = joe;
	return nai;
}

Vista::~Vista() {
}