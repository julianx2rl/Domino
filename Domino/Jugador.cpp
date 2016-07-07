#include "stdafx.h"
#include "Jugador.h"


Jugador::Jugador(char* nombre) : Modelo() {
	this->nombre = nombre;
}

char* Jugador::getNombre() {
	return nombre;
}

void Jugador::recivir(Pieza* man) {
	this->manita.push_front(man);
}

int Jugador::jugada(int magnitud) {
	return 0;
}

list<Pieza*> Jugador::retornarMano() {
	return (this->manita);
}

char* Jugador::imprimir() {
	char* mensaje = new char[(this->manita.size)*4];
	int k = 0;
	for (list<Pieza *>::iterator it = this->manita.begin(); it != this->manita.end(); ++it) {
		char* tmp = (*it)->getData();
		mensaje[k + 0] = tmp[0];
		mensaje[k + 1] = tmp[1];
		mensaje[k + 2] = tmp[2];
		mensaje[k + 3] = '-';
		k = k + 4;
	}
	return mensaje;
}

Pieza* Jugador::colocar(int* meme) {
	return 0;
}

Jugador::~Jugador() {
}