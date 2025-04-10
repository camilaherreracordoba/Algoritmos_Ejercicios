#define _USE_MATH_DEFINES // tiene que quedar delante de "#include <iostream>" o da error
#include <iostream>
#include <cmath>
#include "Header.h"

using namespace std;

const double pi = M_PI;
void ejercicio1() {
	int number;
	cout << "ingrese un número entero: ";
	cin >> number;
	cout << "Número ingresado: " << number << endl;
}
/*
Leer dos números por teclado e imprimir:
- La suma de ambos
- La resta (el primero menos el segundo)
- La multiplicación
- La división
*/
void ejercicio2() {
	double firstNum, secondNum;
	cout << "ingrese un numero: ";
	cin >> firstNum;
	cout << "ingrese otro numero: ";
	cin >> secondNum;
	cout << "Numeros ingresados: " << firstNum << " y " << secondNum << endl;
	cout << "suma " << (firstNum + secondNum) << endl;
	cout << "resta " << (firstNum - secondNum) << endl;
	cout << "multiplicación " << (firstNum * secondNum) << endl;
	cout << "división " << (firstNum / secondNum) << endl;
}
/*
Escribir un programa que lea el nombre de una persona y luego lo salude.
*/
void ejercicio3() {
	string name;
	cout << "Ingrese su nombre: ";
	cin >> name;
	cout << "Hola, " << name << "!" << endl;

}
/*
Dado el radio R de una esfera que se solicita por teclado, calcular e imprimir su
superficie y su volumen
*/
void ejercicio4() {
	double radio, volum, super;
	cout << "Ingrese un radio: ";
	cin >> radio;
	volum = volumen(radio);
	super = superficie(radio);
	cout << "superficie: " << super << endl;
	cout << "volumen: " << volum << endl;
}

double superficie(double radio) {
	return (4 * pi * pow(radio, 2));
}
double volumen(double radio) {
	return ( pi * radio * ((double)4 / 3));
}
/*
double potenciaPositiva(double numero, int expo) {

	if (pot == 0) {
		return 1;
	}
	else {
		return numero * potencia(numero, expo - 1);
	}
}
*/

/*
5) Leer la base y la altura de un rectángulo, calcular el perímetro y la superficie.
*/
void ejercicio5() {
	double base, altura;
	cout << "ingrese la base del rectangulo: ";
	cin >> base;
	cout << "ingrese la altura del rectangulo: ";
	cin >> altura;
	cout << "perimetro: " << perimetro(base, altura) << endl;
	cout << "superficie: " << superficieRectangulo(base, altura) << endl;

}

double perimetro(double base, double altura) {
	return (base * 2) + (altura * 2);
}
double superficieRectangulo(double base, double altura) {
	return base * altura;
}