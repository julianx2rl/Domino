/**
* @file Juego.h
* @version 1.0
* @date 20/06/2016
* @author Julian Arguedas Torres B50587
* @title Clase Juego
* @brief Base de los juegos para polimorfismo
*/

#pragma once
#include "stdafx.h"
#include "Vista.h"
#include "Modelo.h"
using namespace std;

class Juego : public Modelo {

private:

public:

	/**
	* @brief Constructor de Juego
	*/
	Juego();

	/**
	* @brief Metodo virtual jugar
	*/
	virtual void jugar();

	/**
	* @brief Metodo virtual inicializar
	*/
	virtual void inicializar();

	/**
	* @brief Borra los punteros de la clase
	*/
	void restart();

	/**
	* @brief Destructor de juego
	*/
	virtual ~Juego();
};