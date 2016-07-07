#include "stdafx.h"
#include "Modelo.h"

#include <iostream>
using namespace std;

Modelo::Modelo()
{
}

void Modelo::addListado(char** maoh)
{
	this->listado = maoh;
}

void Modelo::addViews(list <Vista*> maoh)
{
	this->vistas = maoh;
}

void Modelo::addView(Vista* nio)
{
	this->vistas.push_front(nio);
}

void Modelo::deleteViews()
{
	vistas.clear();
}

int* Modelo::notifyInput(int numero)
{
	int* respuesta = new int[2];
	for (list<Vista*>::iterator it = this->vistas.begin(); it != vistas.end(); ++it) {
		int* numeral = (*it)->recivir(numero);
		if (numeral != NULL) {
			respuesta = numeral;
		}
	}
	return respuesta;
}

void Modelo::notifyOutput(char* mensaje)
{
	for (list<Vista*>::iterator it = this->vistas.begin(); it != vistas.end(); ++it) {
		(*it)->imprimir(mensaje);
	}
}

void Modelo::mensaje(int numero) {
	this->notifyOutput(listado[numero]);
}

void Modelo::mensaje(char* numero) {
	this->notifyOutput(numero);
}

void Modelo::mensaje(int numero, char* nombre) {
	int uno = sizeof(listado[numero]);
	int dos = sizeof(nombre);
	int total = (uno + dos);
	char* mensaje = new char[total];
	for (int i = 0; i < total; ++i) {
		if (i < uno) {
			mensaje[i] = listado[numero][i];
		}
		else if (i >= uno && i < uno + dos) {
			mensaje[i] = nombre[i];
		}
	}
	this->notifyOutput(mensaje);
}

void Modelo::mensaje(int numero, int nombre) {
	int uno = sizeof(listado[numero]);
	std::string s = std::to_string(nombre);
	char const *pchar = s.c_str();
	int dos = sizeof(pchar);
	int total = (uno + dos);
	char* mensaje = new char[total];
	for (int i = 0; i < total; ++i) {
		if (i < uno) {
			mensaje[i] = listado[numero][i];
		}
		else if (i >= uno && i < total) {
			mensaje[i] = pchar[i];
		}
	}
	this->notifyOutput(mensaje);
}

void Modelo::mensaje(int numero, char* nombre, char* nam) {
	int uno = sizeof(listado[numero]);
	int dos = sizeof(nombre);
	int tres = sizeof(nam);
	int total = (uno + dos + tres);
	char* mensaje = new char[total];
	for (int i = 0; i < total; ++i) {
		if (i < uno) {
			mensaje[i] = listado[numero][i];
		}
		else if (i >= uno && i < (uno + dos)) {
			mensaje[i] = nombre[i];
		}
		else if (i >= (uno + dos) && i < total) {
			mensaje[i] = nam[i];
		}
	}
	this->notifyOutput(mensaje);
}

void Modelo::mensaje(int numero, int main, char* nombre, char* nam) {
	cout << listado[numero] << nombre << main << nam << endl;
	int uno = sizeof(listado[numero]);
	std::string s = std::to_string(main);
	char const *pchar = s.c_str();
	int dos = sizeof(pchar);
	int tres = sizeof(nombre);
	int cuatro = sizeof(nam);
	int total = (uno + dos + tres + cuatro);
	char* mensaje = new char[total];
	for (int i = 0; i < total; ++i) {
		if (i < uno) {
			mensaje[i] = listado[numero][i];
		}
		else if (i >= uno && i < (uno + dos)) {
			mensaje[i] = nombre[i];
		}
		else if (i >= (uno + dos) && i < (uno + dos + tres)) {
			mensaje[i] = pchar[i];
		}
		else if (i >= (uno + dos + tres) && i < total) {
			mensaje[i] = nam[i];
		}
	}
	this->notifyOutput(mensaje);
}

void Modelo::mensaje(int men, int numero1, int numero2, char* nombre) {
	cout << nombre << listado[men] << numero1 << ' ' << numero2 << endl;
	int uno = sizeof(listado[men]);
	std::string s = std::to_string(numero1);
	char const *pchar = s.c_str();
	int dos = sizeof(pchar);
	std::string z = std::to_string(numero2);
	char const *tchar = z.c_str();
	int tres = sizeof(tchar);
	int cuatro = sizeof(nombre);
	int total = (uno + dos + tres + cuatro);
	char* mensaje = new char[total];
	for (int i = 0; i < total; ++i) {
		if (i < uno) {
			mensaje[i] = nombre[i];
		}
		else if (i >= uno && i < (uno + dos)) {
			mensaje[i] = listado[men][i];
		}
		else if (i >= (uno + dos) && i < (uno + dos + tres)) {
			mensaje[i] = pchar[i];
		}
		else if (i >= (uno + dos + tres)) {
			mensaje[i] = ' ';
		}
		else if (i >(uno + dos + tres) && i < total) {
			mensaje[i] = tchar[i];
		}
	}
	this->notifyOutput(mensaje);
}

Modelo::~Modelo() {
}