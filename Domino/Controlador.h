/**
* @file Controlador.h
* @version 1.0
* @date 20/06/2016
* @author Julian Arguedas Torres B50587
* @title Clase Controlador
* @brief Determina cual juego arrancará la máquina dependiendo de la desicion del jugador
*/

#pragma once
#include "stdafx.h"
#include "Tabla.h"
#include "Modelo.h"
using namespace std;

class Controlador : public Modelo {

private:

public:

	/**
	* @brief El juego Domino
	*/
	Tabla* juego;

	/**
	* @brief Constructor defecto de la clase Controlador
	*/
	Controlador();

	/**
	* @brief Presenta la opcion al jugador de elegir uno de los juegos disponibles
	*/
	void jugar();

	/**
	* @brief Destructor por defecto del controlador
	*/
	virtual ~Controlador();
};