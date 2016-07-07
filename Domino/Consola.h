/**
* @file Consola.h
* @version 1.0
* @date 20/06/2016
* @author Julian Arguedas Torres B50587
* @title Clase Consola
* @brief Es la interfaz que imprime a la pantalla
*/

#pragma once
#include "stdafx.h"
#include "Vista.h"
using namespace std;

class Consola : public Vista {

private:

public:

	/**
	* @brief El constructor defecto
	*/

	Consola();

	/**
	* @brief Imprime la línea de programa en la pantalla
	*/

	void imprimir(char*);

	/**
	* @brief Entrega el input del usuario
	*/

	int* recivir(int);

	/**
	* @brief El destructor defecto
	*/

	virtual ~Consola();
};