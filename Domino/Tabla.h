/**
* @file Tabla.h
* @version 1.0
* @date 20/06/2016
* @author Julian Arguedas Torres B50587
* @title Clase Tabla
* @brief Es el juego Tabla
*/

#pragma once
#include "stdafx.h"
#include "Jugador.h"
#include "Jugador1.h"
#include "JugadorEXMACHINA.h"
#include "Vista.h"
#include "Juego.h"
#include "Domino.h"
using namespace std;

class Tabla : public Juego {

private:

	/**
	* @param Jugadores: Lista de jugadores
	* @param Tabla: Una matriz que contiene el juego
	* @param Winner: El char que representa el signo del ganador
	*/
	list<Jugador*> jugadores;
	int* disponibles;
	char winner;
	Domino* set;

public:

	Tabla();

	/**
	* @brief Destructor del TIC TAC TOE
	*/
	~Tabla();

	/**
	* @brief Prepara el juego
	*/
	void inicializar();

	/**
	* @brief Inicia el juego
	*/
	void jugar();

	/**
	* @brief Borra algunos punteros
	*/
	void restart();
};