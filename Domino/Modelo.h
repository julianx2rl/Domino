/**
* @file Modelo.h
* @version 1.0
* @date 20/06/2016
* @author Julian Arguedas Torres B50587
* @title Clase Modelo
* @brief Este es el codigo del modelo que usarán todas las clases
*/

#pragma once
#include "stdafx.h"
#include "Consola.h"
#include "Archivo.h"
#include "Vista.h"

using namespace std;

class Modelo {

private:

public:

	/**
	* @brief La lista de interfaces.
	*/
	list <Vista*> vistas;

	/**
	* @brief Constructor defecto del modelo.
	*/
	Modelo();

	/**
	* @param Una lista de mensajes que el programa presenta de manera frecuente.
	*/
	char** listado;

	/**
	* @brief Agrega el listado al programa
	*/
	void addListado(char**);

	/**
	* @brief Metodo que procesa el mensaje para que las vistas lo impriman bien
	*/
	void mensaje(int);

	void mensaje(char*);

	void mensaje(int, char*);

	void mensaje(int, int);

	void mensaje(int, char*, char*);

	void mensaje(int, int, char*, char*);

	void mensaje(int, int, int, char*);

	/**
	* @brief Agrega una vista a la lista.
	*/
	void addView(Vista*);

	/**
	* @brief Establece una lista de vistas
	*/
	void addViews(list<Vista*>);

	/**
	* @brief Borra las listas
	*/
	void deleteViews();

	/**
	* @brief Retorna la respuesta del jugador
	*/
	int* notifyInput(int);

	/**
	* @brief Solicita imprimir una linea de programa
	*/
	void notifyOutput(char*);

	/**
	* @brief Destructor defecto
	*/
	virtual ~Modelo();
};