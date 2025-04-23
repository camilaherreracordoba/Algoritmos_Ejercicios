#include <iostream>
#include <vector> 
#include <tuple>
#include "Header.h"
using namespace std;

// 13) Imprimir por pantalla una lista de 20 números consecutivos, los cuales
// comienzan con un número ingresado por teclado.

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

/* 14) Leer un número N y calcular su factorial. */
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
15) Leer una serie de números reales, terminando la serie con un cero.Imprimir los
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
/* 16) Dada una serie de números reales, determinar el valor máximo, el mínimo y las posiciones en que estos se encontraban en la serie.
El programa deberá ir preguntando si hay más números para ingresar. */
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
/* 17) Leer un valor N y luego N números enteros.Se pide imprimir el mayor y el menor y las veces que aparece cada uno. */
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

/* 19) Dada una serie de números enteros terminada en cero, imprimir los tres mayores.  */

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


/* 20) Dada una serie de nombres con sus salarios respectivos, determinar el salario máximo, el mínimo y la persona que percibe cada uno. */

tuple<string, double> obtenerMayorSalario(vector<tuple<string, double>> salarios) {
	tuple<string, double> mayor = salarios[0];
	for (int i = 1; i < salarios.size(); i++) {
		if (get<1>(salarios[i]) > get<1>(mayor)) {
			mayor = salarios[i];
		}
	}
	return mayor;
}
tuple<string, double> obtenerMenorSalario(vector<tuple<string, double>> salarios) {
	tuple<string, double> menor = salarios[0];
	for (int i = 1; i < salarios.size(); i++) {
		if (get<1>(salarios[i]) < get<1>(menor)) {
			menor = salarios[i];
		}
	}
	return menor;
}

void ejercicio20() {
	tuple<string, double> salario, menor, mayor;
	vector<tuple<string, double>> salarios;
	string nombre;
	double monto;
	char seguir = ' ';
	while(seguir!= 'n' and seguir!='N') {
		cout << "Ingrese el nombre de la persona: " << endl;
		cin >> nombre;
		cout << "Ingrese el monto que percibe de su salario: " << endl;
		cin >> monto;
		get<0>(salario) = nombre;
		get<1>(salario) = monto;
		salarios.push_back(salario);
		cout << "Ingresar otro salario? (cualquier caracter para continuar, n para salir)" << endl;
		cin >> seguir;
	}
	mayor = obtenerMayorSalario(salarios);
	menor = obtenerMenorSalario(salarios);
	cout << "Mayor salario: " << get<1>(mayor) << "(" << get<0>(mayor) << ")" << endl;
	cout << "Menor salario: " << get<1>(menor) << "(" << get<0>(menor) << ")" << endl;
}
/* 21) Escribir un algoritmo que lea una serie de números reales y verifique si están ordenados en forma ascendente, descendente o si no están ordenados, informando por pantalla.*/
void ejercicio21() {
	vector<double> numeros;
	double numero;
	char entrada = ' ';
	while (entrada != 'n' && entrada != 'N') {
		cout << "Ingrese un numero: " << endl;
		cin >> numero;
		numeros.push_back(numero);

		cout << "Ingrese s para seguir o n para terminar: " << endl;
		cin >> entrada;
	}
	imprimirVector(numeros);
	if (estaEnOrdenAscendente(numeros)) {
		cout << "La serie de numeros esta ordenada en orden ascendente" << endl;
	}
	else if (estaEnOrdenDescendente(numeros)) {
		cout << "La serie de numeros esta ordenada en orden descendente" << endl;
	}
	else {
		cout << "La serie de numeros no esta ordenada " << endl;
	}
}


bool estaEnOrdenAscendente(vector<double> numeros) {
	double numero = numeros[0];
	for (int i = 1; i < numeros.size(); i++) {
		if (numero > numeros[i]) {
			return false;
		}
	}
	return true;
}
bool estaEnOrdenDescendente(vector<double> numeros) {
	double numero = numeros[0];
	for (int i = 1; i < numeros.size(); i++) {
		if (numero < numeros[i]) {
			return false;
		}
	}
	return true;
}

void imprimirVector(vector<double> vector) {
	if (vector.size() > 0) {
		cout << "[";
		for (int i = 0; i < (vector.size() - 1); i++) {
			cout << vector[i];
			cout << ", ";
		}
		cout << vector[vector.size() - 1] << "]" << endl;
	}
	else {
		cout << "[]" << endl;
	}
}
/* 22) La relación entre temperaturas Celsius y Fahrenheit está dada por : C = 5 / 9 * (F – 32).Escribir un algoritmo que haga una tabla de valores Celsius - Fahrenheit, para valores entre OºF y 200ºF, a intervalos de 10º.*/
void ejercicio22() {
	double gradosFahrenheit = 0;
	double gradosCelsius = 0;
	cout << "Fahrenheit a Celsius" << endl;

	while (gradosFahrenheit <= 200)
	{
		gradosCelsius = fahrenheitACelsius(gradosFahrenheit);
		cout << "   " << gradosFahrenheit << "    |    " << gradosCelsius << endl;
		gradosFahrenheit += 10;
	}
}

double fahrenheitACelsius(double grados) {
	return (grados - 32) * 5 / 9;
}


/* 23) Leer N y luego N lotes de números reales que terminan con un valor 0, y calcularla media individual de cada lote, junto con la media total de todos los números ingresados. */

void ejercicio23() {
	int N;
	double entrada;
	vector<vector<double>> lotes;
	cout << "Ingrese la cantidad de lotes: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		vector<double> lote;
		cout << "Ingrese los numeros para el lote " << i + 1 << " (finalice con 0):" << endl;
		while (true) {
			cin >> entrada;
			if (entrada == 0) {
				break;
			}
			lote.push_back(entrada);
		}
		lotes.push_back(lote);
	}
	imprimirLotes(lotes);
	cout << "Media de todos los elementos: " << mediaTotal(lotes);
}
void imprimirLotes(vector<vector<double>> lotes) {
	for (int i = 0; i < lotes.size(); i++) {
		imprimirVector(lotes[i]);
		cout << "Media: " << media(lotes[i]) << endl;
	}
}
double media(vector<double> lote) {
	double suma = 0;
	for (int i = 0; i < lote.size(); i++) {
		suma += lote[i];
	}
	return suma / lote.size();
}
double mediaTotal(vector<vector<double>> lotes) {
	double suma = 0;
	int elementos = 0;
	for (int i = 0; i < lotes.size(
	); i++) {
		elementos += lotes[i].size();
		for (int j = 0; j < lotes[i].size(); j++) {
			suma += lotes[i][j];
		}
	}
	return suma / elementos;
}