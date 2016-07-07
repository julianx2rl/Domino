#include "stdafx.h"
#include "Tabla.h"

#include <iostream>
using namespace std;

Tabla::Tabla() : Juego()
{
	this->disponibles = new int[1];
	this->disponibles[0] = 999;
}

void Tabla::inicializar()
{
	int variable = 2;
	this->set = new Domino();
	(set)->BarajarPiezas;
	bool terminado = false;
	bool hecho = false;
	int numero = 0;
	while (terminado == false) {
		this->mensaje(8, "jugadores de 1 a 4");
		int* numeral = this->notifyInput(1);
		numero = numeral[0];
		hecho = false;
		if (numero < 1) {
			this->mensaje(9, "1");
		}
		else {
			if (numero > 4) {
				this->mensaje(10, "4");
			}
		}
		if (numero >= 1 && numero <= 4) {
			terminado = true;
		}
	}
	char* nombres[10] = { "Person1", "Person2", "Person3", "Person4" "Person5", "Person6", "Person7", "Person8", "Person9", "Person0" };
	for (int i = 0; i < numero; ++i) {
		Jugador1* ex = new Jugador1(nombres[i]);
		ex->addViews(this->vistas);
		this->jugadores.push_back(ex);
	}
	//char* nambres[10] = { "CPU1", "CPU2", "CPU3", "CPU4" "CPU5", "CPU6", "CPU7", "CPU8", "CPU9", "CPU0" };
	//if (numero <= 4) {
		//for (int i = 0; i < (4 - numero); ++i) {
			//this->jugadores.push_back(new JugadorEXMACHINA(nambres[i]));
		//}
	//}
	this->jugar();
}

void Tabla::jugar()
{
	//El programa decide quien va primero, el cual es quien tenga el doble con menor numero, si no hay dobles empieza del jugador 0;
	int h = 999;
	int yano = 0;
	int p = 0;
	for (list<Jugador*>::iterator it = this->jugadores.begin(); it != this->jugadores.end(); ++it) {
		list<Pieza*>tmp = (*it)->retornarMano();
		for (list<Pieza *>::iterator ite = tmp.begin(); ite != tmp.end(); ++ite) {
			int* tame = (*ite)->getValores();
			if ((tame[1] == tame[0]) && ((tame[0]) < h)) {
				p = yano;
			}
		}
		++yano;
	}
	bool terminado = false;
	while (terminado == false) {
		for (list<Jugador*>::iterator it = this->jugadores.begin(); it != this->jugadores.end(); ++it) {
			this->mensaje(5, ((*it)->imprimir()));
			this->mensaje(0, "0 - Poner / 1 - Comer / 2 - Pasar");
			int desicion = (*it)->jugada(2);
			switch (desicion) {
			// El jugador decide colocar una pieza
			case 0:
			{
				bool able = false;
				list<Pieza*>tmp = (*it)->retornarMano();
				for (list<Pieza *>::iterator ite = tmp.begin(); ite != tmp.end(); ++ite) {
					int* tame = (*ite)->getValores();
					for (int r = 0; r < (sizeof(this->disponibles)); ++r) {
						if (this->disponibles[r] == 999) {
							able = true;
							break;
						}
						else if ((this->disponibles[r] == tame[0]) || (this->disponibles[r] == tame[1])) {
							able = true;
							break;
						}
					}
				}
				if (able == false) {
					this->mensaje(1);
				}
				else {
					this->mensaje(4, "la pieza que quieres poner");
					if (this->disponibles[0] == 999) {
						Pieza* newer = (*it)->colocar(this->disponibles);
						int* tume = (newer)->getValores();
						if (tume[0] != tume[1]) {
							this->disponibles = new int[2];
							this->disponibles[0] = tume[0];
							this->disponibles[1] = tume[1];
						}
						else {
							this->disponibles = new int[4];
							this->disponibles[0] = tume[0];
							this->disponibles[1] = tume[0];
							this->disponibles[2] = tume[1];
							this->disponibles[3] = tume[1];
						}
					}
					else {
						Pieza* newer = (*it)->colocar(this->disponibles);
						int* tume = (newer)->getValores();
						if (tume[0] != tume[1]) {
							int magnitud = sizeof(this->disponibles);
							this->disponibles = new int[magnitud];
							bool changed = false;
							for (int r = 0; r < (magnitud); ++r) {
								if (this->disponibles[r] == tume[0]) {
									this->disponibles[r] = tume[1];
									break;
								}
								else if (this->disponibles[r] == tume[1]) {
									this->disponibles[r] = tume[0];
									break;
								}
							}
						}
						else {
							int magnitud = sizeof(this->disponibles);
							int* casi = new int[magnitud+2];
							for (int r = 0; r < (magnitud); ++r) {
								casi[r] = this->disponibles[r];
							}
							casi[magnitud] = tume[1];
							casi[magnitud+1] = tume[1];
							this->disponibles = new int[magnitud + 2];
							for (int r = 0; r < (magnitud+1); ++r) {
								this->disponibles[r] = casi[r];
							}
						}
					}
				}
				list<Pieza*> yona = (*it)->manita;
				if (yona.size <= 0) {
					terminado = true;
					this->mensaje(2, (*it)->getNombre());
				}
			}
			case 1:
			{
				Pieza* casi = this->set->getPieza();
				(*it)->recivir(casi);
			}
			case 2:
			{
			}
			}
		}
	}
}

void Tabla::restart()
{
	jugadores.clear();
	delete (this->disponibles);
}

Tabla::~Tabla() {
}