#include <iostream>
#include <vector> 

#include "Header.h"
using namespace std;

// 13) Imprimir por pantalla una lista de 20 n�meros consecutivos, los cuales
// comienzan con un n�mero ingresado por teclado.

void ejercicio13() {
	int numero;
	cout << "Ingrese un numero: ";
	cin >> numero;
	for (int i = numero; i < (numero + 20); i++) {
		cout << i;
		if (i != (numero + 20)-1) {
			cout << ", ";
		}
		else { cout << " " << endl; }
	}
}

/* 14) Leer un n�mero N y calcular su factorial. */
void ejercicio14() {
	int numero;
	cout << "Ingrese un numero: ";
	cin >> numero;

	ejercicio14Menu(numero);
}
void ejercicio14Menu(int numero) {
	int seleccion;
	cout << "Opciones de operacion" << endl;
	cout << "1. Recursivo" << endl;
	cout << "2. Iterativo" << endl;
	cout << "0. Salir" << endl;
	cin >> seleccion;
	switch (seleccion) {
		case 1:
			cout << factorial(numero) << endl;
			ejercicio14Menu(numero);
			break;
		case 2:
			cout << factorialIterativo(numero) << endl;
			ejercicio14Menu(numero);
			break;
		case 0:
			break;
		default:
			ejercicio14Menu(numero);
			break;
	}
}
double factorial(int numero) {
	if (numero == 0) {
		return 1;
	}
	else {
		return numero * factorial(numero - 1);
	}
}
double factorialIterativo(int numero) {
	double resultado = 1;
	if (numero > 0) {
		for (int i = numero; i > 0; i--) {
			resultado = i * resultado;
		}
	}
	return resultado;
}

/*
15) Leer una serie de n�meros reales, terminando la serie con un cero.Imprimir los
datos a medida que se los ingresa junto con la suma parcial de los mismos.
*/

void ejercicio15() {
	double ingresado = 1, sumaParcial=0;
	while (ingresado != 0) {
		cout << "Ingrese un numero: ";
		cin >> ingresado;
		sumaParcial += ingresado;
		cout << "Suma Parcial: " << sumaParcial << endl;
	}
}
/* 16) Dada una serie de n�meros reales, determinar el valor m�ximo, el m�nimo y las posiciones en que estos se encontraban en la serie.
El programa deber� ir preguntando si hay m�s n�meros para ingresar. */
void ejercicio16() {
	vector<double> numeros;
	double numero, maximo, minimo;
	char indicador = ' ';
	while (indicador != 'n') {
		cout << "Ingrese un numero: " << endl;
		cin >> numero;
		numeros.push_back(numero);
		cout << "Presione n para salir o cualquier otra tecla para continuar: ";
		cin >> indicador;
	}
	maximo = valorMaximo(numeros);
	minimo = valorMinimo(numeros);
	cout << "Mayor: " << maximo << ". Posicion: "<< posicion(numeros, maximo) << endl;
	cout << "Minimo: " << minimo << ". Posicion: " << posicion(numeros, minimo) << endl;
}
double valorMaximo(vector<double> numeros) {
	double nro = numeros[0];
	for (int i = 1; i < numeros.size(); i++) {
		if (nro < numeros[i]) {
			nro = numeros[i];
		}
	}
	return nro;
}
double valorMinimo(vector<double> numeros) {
	double nro = numeros[0];
	for (int i = 1; i < numeros.size(); i++) {
		if (nro > numeros[i]) {
			nro = numeros[i];
		}
	}
	return nro;
}

int posicion(vector<double> numeros, double numero) {
	for (int i = 0; i < numeros.size(); i++) {
		if (numeros[i] == numero) {
			return i;
		}
	}
}
/* 17) Leer un valor N y luego N n�meros enteros.Se pide imprimir el mayor y el menor y las veces que aparece cada uno. */
void ejercicio17() {
	vector<double> numeros;
	int cantidad, numero, maximo, minimo;
	cout << "Ingrese la cantidad de numeros: ";
	cin >> cantidad;
	for (int i = 0; i < cantidad; i++) {
		cout << "Ingrese un numero: " << endl;
		cin >> numero;
		numeros.push_back(numero);
	}
	maximo = (int)valorMaximo(numeros);
	minimo = (int)valorMinimo(numeros);
	cout << "Mayor: " << maximo << ". Apariciones: " << apariciones(numeros, maximo) << endl;
	cout << "Menor: " << minimo << ". Apariciones: " << apariciones(numeros, minimo) << endl;
}

int apariciones(vector<double> numeros, double numero) {
	int incidencias = 0;
	for (int i = 0; i < numeros.size(); i++) {
		if (numero == numeros[i]) {
			incidencias++;
		}
	}
	return incidencias;
}
/* 18) Leer A y B, enteros.Calcular C = A x B mediante sumas sucesivas e imprimir el resultado. */

void ejercicio18() {
	int numeroA, numeroB;
	cout << "Ingrese el numero A: ";
	cin >> numeroA;
	cout << "Ingrese el numero B: ";
	cin >> numeroB;
	cout << numeroA << "x" << numeroB << " = " << mutiplicacionPorSumaSucesiva(numeroA, numeroB) << endl;
}

int mutiplicacionPorSumaSucesiva(int numeroA, int numeroB) {
	int resultado = 0;
	if (numeroB > 0) {
		for (int i = 1; i <= numeroB; i++) {
			resultado += numeroA;
		}
	}
	else {
		for (int i = numeroB; i < 0; i++) {
			resultado -= numeroA;
		}
	}
	return resultado;
}

/* 19) Dada una serie de n�meros enteros terminada en cero, imprimir los tres mayores.  */

void ejercicio19() {
	int numero = 1, mayor, segundoMayor, tercerMayor;
	vector<int> numeros;
	while (numero != 0) {
		cout << "Ingrese un numero: ";
		cin >> numero;
		numeros.push_back(numero);
	}
	mayor = numeros[0]; segundoMayor = numeros[0]; tercerMayor = numeros[0];

	for (int i = 0; i < numeros.size(); i++) {
		if (numeros[i] > mayor) {
			tercerMayor = segundoMayor;
			segundoMayor = mayor;
			mayor = numeros[i];
		}
		else if (numeros[i] > segundoMayor) {
			tercerMayor = segundoMayor;
			segundoMayor = numeros[i];
		}
		else if (numeros[i] > tercerMayor) {
			tercerMayor = numeros[i];
		}
	}
	cout << "Tres mayores: " << mayor << " " << segundoMayor << " " << tercerMayor << endl;

}


/* 20) Dada una serie de nombres con sus salarios respectivos, determinar el salario m�ximo, el m�nimo y la persona que percibe cada uno. */

/* 21) Escribir un algoritmo que lea una serie de n�meros reales y verifique si est�n ordenados en forma ascendente, descendente o si no est�n ordenados, informando por pantalla.*/

/* 22) La relaci�n entre temperaturas Celsius y Fahrenheit est� dada por : C = 5 / 9 * (F � 32).Escribir un algoritmo que haga una tabla de valores Celsius - Fahrenheit, para valores entre O�F y 200�F, a intervalos de 10�.*/

/* 23) Leer N y luego N lotes de n�meros reales que terminan con un valor 0, y calcularla media individual de cada lote, junto con la media total de todos los n�merosingresados. */
