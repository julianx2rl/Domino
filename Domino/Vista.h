/**
* @file Vista.h
* @version 1.0
* @date 20/06/2016
* @author Julian Arguedas Torres B50587
* @title Clase Vista
* @brief Este es el codigo base para polimorfismo de las vistas
*/

#pragma once
#include "stdafx.h"
using namespace std;

class Vista {

private:

public:

	/**
	* @brief Constructor defecto
	*/
	Vista();

	/**
	* @brief Imprime una linea del programa
	*/
	virtual void imprimir(char*);

	/**
	* @brief Retorna la respuesta del usuario
	*/
	virtual int* recivir(int);

	/**
	* @brief Destructor defecto
	*/
	virtual ~Vista();
};