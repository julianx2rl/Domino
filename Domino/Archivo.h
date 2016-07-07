/**
* @file Archivo.h
* @version 1.0
* @date 20/06/2016
* @author Julian Arguedas Torres B50587
* @title Clase Archivo
* @brief Es la interfaz que imprime al .txt
*/

#pragma once
#include "stdafx.h"
#include "Vista.h"
using namespace std;

class Archivo : public Vista {

private:

public:

	/**
	* @brief El constructor defecto
	*/

	Archivo();

	/**
	* @brief Imprime las lineas del programa en el .txt
	*/

	void imprimir(char*);

	/**
	* @brief Devuelve un NULL para que el programa lea el input de consola
	*/

	int* recivir(int);

	/**
	* @brief El destructor defecto
	*/

	virtual ~Archivo();
};