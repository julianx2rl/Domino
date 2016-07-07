/**
* @file Jugador1.h
* @version 1.0
* @date 20/06/2016
* @author Julian Arguedas Torres B50587
* @title Clase Jugador1
* @brief Este es el codigo del jugador humano de BlackJack
*/

#pragma once

#include "Jugador.h"
#include "Vista.h"

class Jugador1 : public Jugador {

private:

public:

	/**
	* @brief Constructor defecto
	* @param char: Nombre del jugador
	*/
	Jugador1(char*);

	/**
	* @brief Retorna un int con la desicion del jugador
	*/
	int jugada(int);

	/**
	* @brief
	*/
	Pieza* colocar(int*);

	/**
	* @brief Destructor defecto
	*/
	virtual ~Jugador1();
};