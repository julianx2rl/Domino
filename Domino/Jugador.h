/**
* @file Jugador.h
* @version 1.0
* @date 20/06/2016
* @author Julian Arguedas Torres B50587
* @title Clase Jugador
* @brief Este es el codigo base de jugador usado para polimorfismo
*/

#pragma once

#include "Pieza.h"
#include "stdafx.h"
#include "Vista.h"
#include "Modelo.h"

using namespace std;

class Jugador : public Modelo {

private:

public:

	/**
	* @brief Constructor defecto
	* @param char: Nombre del jugador
	*/
	Jugador(char*);

	/**
	* @param manita: Piezas del jugador
	*/
	list<Pieza*> manita;

	/**
	* @brief Recive una Pieza
	* @param Pieza: La Pieza recibida
	*/
	void recivir(Pieza*);

	/**
	* @param char: Nombre del jugador
	*/
	char * nombre;

	/**
	* @brief Retorna el nombre del jugador
	*/
	char * getNombre();

	/**
	* @brief Retorna la lista con las Piezas del jugador
	*/
	list<Pieza*> retornarMano();

	/**
	* @brief Solicita una respuesta por parte del jugador para continuar el juego
	*/
	virtual int jugada(int);

	/**
	* @param El valor de las Piezas en la lista
	*/
	int valor();

	/**
	* @param Retorna la pieza que quiere colocar
	*/
	Pieza* colocar(int*);

	/**
	* @brief Retorna un char con los numeros de las piezas del Jugador
	*/
	char* imprimir();

	/**
	* @brief Destructor defecto
	*/
	virtual ~Jugador();
};