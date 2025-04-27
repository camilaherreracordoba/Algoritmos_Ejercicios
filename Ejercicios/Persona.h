#pragma once

#ifndef PERSONA_H
#define PERSONA_H

#include <vector> 
#include <string>
using namespace std;

struct Persona {
	string nombre;
	int numero;
	Persona(string nombre, int numero) : nombre(nombre), numero(numero) {};
};
void cargarContacto(vector<Persona>& agenda);
int buscarNumero(vector<Persona> agenda, string nombre);
void menuAgenda(vector<Persona> agenda);
string buscarNombre(vector<Persona> agenda, int numero);
void cargarDatos(vector<Persona>& agenda);
void modificarNumero(vector<Persona>& agenda, int numero, int nuevo);
void eliminarContacto(vector<Persona>& agenda, string nombre);
#endif // PERSONA_H
