#include "stdafx.h"
#include "Pieza.h"
#include "Domino.h"

using namespace std;

Domino::Domino() {
	char numeros[] = { '1', '2', '3', '4', '5', '6' };
	int valor[] = { 1, 2, 3, 4, 5, 6 };
	int k = 0;
	for (int i = 0; i < 6; ++i) {
		for (int j = k; j < 6; ++j) {
			Pieza* tmp = new Pieza(numeros[i], numeros[j], valor[i], valor[j]);
			this->listaPiezas.push_front(tmp);
		}
		++k;
	}
}

void Domino::BarajarPiezas() {
	srand(time(NULL));
	for (int i = 0; i < 1000; i++) {
		list<Pieza*>::iterator it1 = listaPiezas.begin();
		list<Pieza*>::iterator it2 = listaPiezas.begin();

		int r = rand() % 80;
		int s = listaPiezas.size();

		int limite1 = rand() % listaPiezas.size();
		int limite2 = rand() % listaPiezas.size();

		for (int i = 0; i < limite1; i++) {
			++it1;
		}

		for (int i = 0; i < limite2; i++) {
			++it2;
		}

		Pieza* tmp = *it1;
		*it1 = *it2;
		*it2 = tmp;
	}
}

void Domino::imprimirJuego() {
	cout << "Piezas:" << endl;
	for (list<Pieza*>::iterator it = listaPiezas.begin(); it != listaPiezas.end(); ++it) {
		cout << *it << endl;
	}
}

Pieza* Domino::getPieza() {
	list<Pieza*>::iterator it1 = listaPiezas.begin();
	Pieza* tmp = *it1;
	listaPiezas.pop_front();
	return tmp;
}

void Domino::reset() {
	listaPiezas.clear();
	char numeros[] = { '1', '2', '3', '4', '5', '6' };
	int valor[] = { 1, 2, 3, 4, 5, 6 };
	int k = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = k; j < 6; j++) {
			Pieza* tmp = new Pieza(numeros[i], numeros[j], valor[i], valor[j]);
			this->listaPiezas.push_front(tmp);
		}
	}
}

Domino::~Domino() {
}