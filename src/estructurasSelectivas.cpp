//#define _USE_MATH_DEFINES // tiene que quedar delante de "#include <iostream>" o da error
#include <iostream>
//#include <cmath>
#include "Header.h"

using namespace std;

/*
6) Leer un número real y decir si es mayor, menor o igual a cero
*/
void ejercicio6() {
	double real;
	cout << "ingrese un numero: ";
	cin >> real;
	if (real == 0) {
		cout << "El numero ingresado es igual a 0" << endl;
	}
	else if (real < 0) {
		cout << "El numero ingresado es menor a 0" << endl;
	}
	else if (real > 0) {
		cout << "El numero ingresado es mayor a 0" << endl;
	}
}
/*
7) Leer dos números reales e imprimir el mayor de ellos.
*/
void ejercicio7() {
	double numero, otroNumero;
	cout << "Ingrese un numero: ";
	cin >> numero;
	cout << "Ingrese otro numero: ";
	cin >> otroNumero;
	if (numero == otroNumero) {
		cout << "Los dos numeros son el mismo" << endl;
	}
	else if (numero > otroNumero) {
		cout << numero << " es el mayor" << endl;
	}
	else if (numero < otroNumero) {
		cout << otroNumero << " es el mayor" << endl;
	}
}
/*
8) Escribir un algoritmo que determine si un número es par.
*/

void ejercicio8() {
	double numero;
	cout << "Ingrese un numero: ";
	cin >> numero;
	if (esPar(numero)) {
		cout << numero << " es par" << endl;
	}
	else {
		cout << numero << " es impar" << endl;
	}
}
bool esPar(double numero) {
	return ((int)numero % 2) == 0;
}
/*
9) Escribir un algoritmo que determine si un número M es divisible por N.
*/
void ejercicio9() {
	int numero, divisor;
	cout << "Ingrese un numero: ";
	cin >> numero;
	cout << "Ingrese su divisor: ";
	cin >> divisor;
	if (esDivisible(numero, divisor)) {
		cout << numero << " es divisible por " << divisor << endl;
	}
	else {
		cout << numero << " no es divisible por " << divisor << endl;
	}
}
bool esDivisible(int numero, int divisor) {
	if (divisor == 0) {
		return false;
	}
	return (numero % divisor) == 0;
}


/*
10) Leer dos números y luego una opción que puede ser “ + ”: suma, “ – “: resta, “ *
”: multiplicación o “ / “: división. Según la opción elegida realizar el cálculo.
*/

void ejercicio10() {
	double numero, otroNumero;
	cout << "Ingrese un numero: ";
	cin >> numero;
	cout << "Ingrese otro numero: ";
	cin >> otroNumero;
	ejercicio10Menu(numero, otroNumero);
}

void ejercicio10Menu(double numero, double otroNumero) {
	char seleccion;
	cout << "+: Suma" << endl;
	cout << "-: Resta" << endl;
	cout << "*: Multiplicacion" << endl;
	cout << "/: Division" << endl;
	cout << "0 Para salir" << endl;
	cin >> seleccion;
	switch (seleccion) {
	case ('+'):
		cout << (numero + otroNumero) << endl;
		ejercicio10Menu(numero, otroNumero);
		break;
	case ('-'):
		cout << (numero - otroNumero) << endl;
		ejercicio10Menu(numero, otroNumero);
		break;
	case ('*'):
		cout << (numero * otroNumero) << endl;
		ejercicio10Menu(numero, otroNumero);
		break;
	case ('/'):
		cout << (numero / otroNumero) << endl;
		ejercicio10Menu(numero, otroNumero);
		break;
	case ('0'):
		break;
	default:
		ejercicio10Menu(numero, otroNumero);
	}
}


/*
11) Formar un menú de 4 opciones y, al elegir una de ellas, saldrá un cartel diciendo
qué opción se eligió o si fue una opción incorrecta.
*/

void ejercicio11() {
	int opcion;
	cout << "Elegir una opcion" << endl;
	cout << "Opcion 1" << endl;
	cout << "Opcion 2" << endl;
	cout << "Opcion 3" << endl;
	cout << "Opcion 4" << endl;
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		cout << "Eligio opcion 1" << endl;
		break;
	case 2:
		cout << "Eligio opcion 2" << endl;
		break;
	case 3:
		cout << "Eligio opcion 3" << endl;
		break;
	case 4:
		cout << "Eligio opcion 4" << endl;
		break;
	default:
		cout << "Opcion no valida" << endl;
		break;
	}
}

/*
12) Pasar un período expresado en segundos a un período expresado en días, horas,
minutos y segundos.
*/

void ejercicio12() {
	int segundos, dias, horas, minutos;
	cout << "Ingrese una cantidad de segundos: ";
	cin >> segundos;
	dias = segundos / 86400;
	segundos = segundos % 86400;
	horas = segundos / 3600;
	segundos = segundos % 3600;
	minutos = segundos / 60; segundos = segundos % 60;
	cout << dias << " dias, " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos" << endl;
	//cout << dias << " Dias, " << horas << ":" << minutos << ":" << segundos << endl;
}
