#include "stdafx.h"
#include "Consola.h"
#include <iostream>

using namespace std;

Consola::Consola() : Vista() {
}


void Consola::imprimir(char* mensaje) {
	cout << mensaje << endl;
}

int* Consola::recivir(int numero) {
	int* numeral = new int[numero];
	for (int i = 0; i < numero; ++i) {
		int j = 0;
		bool hecho = false;
		while (hecho = false) {
			cin >> j;
			if (cin.fail()) {
				this->imprimir("Elije un valor numerico");
			}
			else {
				numeral[numero] = j;
				hecho = true;
			}
		}
	}
	return numeral;
}

Consola::~Consola() {
}