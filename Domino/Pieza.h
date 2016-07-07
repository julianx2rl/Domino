/**
* @file Pieza.h
* @version 1.0
* @date 3/06/2016
* @author Julian Arguedas Torres B50587
* @title Clase Pieza
* @brief
*/

#pragma once
#include "stdafx.h"
using namespace std;

class Pieza {

private:
	char numero1;
	char numero2;
	int valor1;
	int valor2;

public:
	/**
	* @brief Constructor por parametros de Pieza
	* @param Son los numeros en la pieza del domino
	*/
	Pieza(char, char, int, int);

	/**
	* @brief Destructor de Pieza
	*/
	~Pieza();

	/**
	* @brief Valor de la Pieza
	* @return Entero con el valor de la Pieza
	*/
	int* getValores();

	/**
	* @brief Datos de la Pieza
	* @return Mensaje con datos de la Pieza
	*/
	char* getData();
};