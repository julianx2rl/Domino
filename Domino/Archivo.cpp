#include "stdafx.h"
#include "Archivo.h"
#include <iostream>

using namespace std;

Archivo::Archivo() : Vista() {
}

void Archivo::imprimir(char* mensaje) {
	ofstream escritura("Output.txt");
	escritura << mensaje << endl;
	escritura.close();
}

int* Archivo::recivir(int numero) {
	return NULL;
}

Archivo::~Archivo() {
}