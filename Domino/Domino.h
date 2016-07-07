/**
* @file Domino.h
* @version 1.0
* @date 07/05/2016
* @author GrupoProgra: Julian Arguedas Torres B50587 - Milton Delgado Fernandez B12188 - Kenneth Walker Fernandez B37663
* @title Clase Domino
* @brief
*/

#pragma once

#include <list>
#include "Pieza.h"

class Domino
{
private:

	list<Pieza*> listaPiezas;

public:
	/**
	* @brief Constructor por defecto de Domino
	*/
	Domino();

	/**
	* @brief Saca una Pieza de la Domino
	* @return Puntero a una Pieza de la Domino
	*/
	Pieza* getPieza();

	/**
	* @brief Le da a la Domino un orden psudoaleatorio
	*/
	void BarajarPiezas();

	/**
	* @brief Imprime por Consola el estado del Domino
	*/
	void imprimirJuego();

	/**
	* @brief Destruye la Domino y crea una nueva completa
	*/
	void reset();

	/**
	* @brief Destructor de Domino
	*/
	~Domino();
};