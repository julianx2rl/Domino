#include "stdafx.h"
#include "Pieza.h"

using namespace std;

Pieza::Pieza(char tnumero1, char tnumero2, int tvalor1, int tvalor2) : numero1(tnumero1), numero2(tnumero2), valor1(tvalor1), valor2(tvalor2) {
}


Pieza::~Pieza() {
}

int* Pieza::getValores() {
	int* finale = new int[2];
	finale[0] = this->valor1;
	finale[1] = this->valor2;
	return finale;
}

char* Pieza::getData() {
	char* finale = new char[3];
	finale[0] = this->numero1;
	finale[1] = '/';
	finale[2] = this->numero2;
	return finale;
}