/**
* @file JugadorEXMACHINA.h
* @version 1.0
* @date 20/06/2016
* @author Julian Arguedas Torres B50587
* @title Clase JugadorEXMACHINA
* @brief Este es el codigo del jugador CPU de BlackJack
*/

#pragma once

#include "Jugador.h"

class JugadorEXMACHINA : public Jugador {
private:

public:

	/**
	* @brief Destructor defecto
	*/
	JugadorEXMACHINA(char*);

	/**
	* @brief Retorna un int con la desicion del CPU dependiendo de su criterio
	*/
	int jugada(int);

	/**
	* @brief
	*/

	Pieza* colocar(int*);

	/**
	* @brief Destructor defecto
	*/
	virtual ~JugadorEXMACHINA();
};