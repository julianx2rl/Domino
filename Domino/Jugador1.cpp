#include "stdafx.h"
#include "Jugador1.h"


Jugador1::Jugador1(char * apodo) : Jugador(apodo) {
	this->nombre = apodo;
}

int Jugador1::jugada(int magnitud) {
	int opcion = -1;
	while (opcion < 0 || opcion > magnitud) {
		int* rad = this->notifyInput(1);
		opcion = rad[0];
		if (opcion < 0 || opcion > magnitud) {
			this->mensaje(1);
		}
	}
	return opcion;
}

Pieza* Jugador1::colocar(int* meme) {
	Pieza* eleccion = new Pieza(99, 99, '9', '9');
	bool terminado = false;
	while (terminado == false) {
		int des = -8;
		while (des < 0 || des > (this->manita.size())) {
			int* destiny = this->notifyInput(1);
			des = destiny[0];
		}
		int counter = 0;
		for (list<Pieza *>::iterator ite = this->manita.begin(); ite != this->manita.end(); ++ite) {
			if (counter == des) {
				int* tame = (*ite)->getValores();
				char* tome = (*ite)->getData();
				for (int r = 0; r < sizeof(meme); ++r) {
					if (tame[0] == meme[r] || tame[1] == meme[r]) {
						terminado = true;
						eleccion = new Pieza(tame[0], tame[1], tome[0], tome[1]);
						this->manita.erase(ite);
					}
				}
				if (terminado == false) {
					this->mensaje(1);
				}
			}
			++counter;
		}
	}
	return eleccion;
}

Jugador1::~Jugador1() {
}