#include "stdafx.h"
#include "Controlador.h"

#include <iostream>
using namespace std;

Controlador::Controlador() : Modelo() {
	this->listado = new char*[15];
	listado[0] = { "Que quieres hacer? " };
	listado[1] = { "Movimiento invalido, intenta de nuevo! " };
	listado[2] = { "El ganador es: " };
	listado[3] = { "Es un empate! " };
	listado[4] = { "Elige " };
	listado[5] = { "Tus piezas son: " };
	listado[6] = { "Elige tu nombre " };
	listado[7] = { " eligio el espacio: " };
	listado[8] = { "Elige la cantidad de " };
	listado[9] = { "Al menos esta cantidad es requerida: " };
	listado[10] = { "La cantidad máxima es de: " };
	listado[11] = { "Jugador: " };
	listado[12] = { "Perdio el jugador: " };
	listado[13] = { "Valor: " };
	listado[14] = { "Suerte " };

	Archivo* tmp1 = new Archivo();
	Consola* tmp2 = new Consola();
	this->juego = new Tabla();
	juego->addView(tmp1);
	juego->addView(tmp2);
	juego->addListado(listado);
}

void Controlador::jugar()
{
	bool end = false;
	while (end = true) {
		int numero;
		juego->inicializar();
		juego->restart();
		this->mensaje(11, "Quieres intentar de nuevo? 0 - YES / ANYOTHER - NO");
		int* kaol = new int[2];
		kaol = this->notifyInput(1);
		numero = kaol[0];
		if (numero == 0) {
			end = false;
		}
		else {
			end = true;
		}
	}
	delete juego;
}

Controlador::~Controlador() {
}