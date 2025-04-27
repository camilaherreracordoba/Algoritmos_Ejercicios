#include <iostream>
#include <vector> 
#include <tuple>
#include <string>
#include <tuple>
#include "Header.h"
using namespace std;

//24) Hacer una función que, dado los coeficientes de un polinomio de segundo grado
//(3 números reales), indique si tiene o no raíces reales, devolviendo un valor
//booleano.
void ejercicio24() {
	double a, b, c;
	cout << "Ingrese los terminos del polinomio: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
    
	if (tieneRaicesReales(a, b, c)) {
		cout << "El polinomio tiene raices reales" << endl;
	}
	else {
		cout << "El polinomio no tiene raices reales" << endl;
	}
}

double potencia(double numero, int exponente) {
	double total = 1;
	for (int i = 1; i <= exponente; i++) {
		total *= numero;
	}
	return total;
}

double discriminante(double a, double b, double c) {
	// b² - 4ac
	//return potencia(b, 2) - 4 * a * c;
    return (b * b) - 4 * a * c;
}

bool tieneRaicesReales(double a, double b, double c) {
	return discriminante(a, b, c) >= 0;
}
void imprimirPolinomio(double a, double b, double c) {
    string polinomio;

    if (a != 0) {
        if (a == -1) {
            polinomio += "-x^2";
        } else if (a == 1) {
            polinomio += "x^2";
        } else {
            polinomio += to_string(a) + "x^2";
        }
    }

    if (b != 0) {
        if (!polinomio.empty() && b > 0) {
            polinomio += " + ";
        } else if (b < 0) {
            polinomio += " - ";
        }

        if (abs(b) != 1) {
            polinomio += to_string(abs(b)) + "x";
        } else {
            polinomio += "x";
        }
    }

    if (c != 0) {
        if (!polinomio.empty() && c > 0) {
            polinomio += " + ";
        } else if (c < 0) {
            polinomio += " - ";
        }
        polinomio += to_string(abs(c));
    }

    if (polinomio.empty()) {
        polinomio = "0";
    }

    cout << polinomio;
}

//25) Hacer una función que devuelva las raíces reales de un polinomio de segundo
//grado y además indique si tiene o no raíces reales.Nota: utilizar la función
//realizada en el ejercicio 39. Si no tuviera raíces reales, devolverá 0 en ambas.
void ejercicio25() {
    double a, b, c;
    tuple<double, double> raices;
    cout << "Ingrese los terminos del polinomio: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    raices = obtenerRaices(a, b, c);
    

}
tuple<double, double> obtenerRaices(double a, double b, double c) {
    double x1, x2;
    x1 = (-b + discriminante(a, b, c)) / (2 * a);
    x2 = (-b - discriminante(a, b, c)) / (2 * a);
    return  { x1, x2 };
}
//26) Hacer un programa principal en donde se pida al usuario ingresar los coeficientes
//de la cuadrática, e indicar si tiene o no raíces, y cuáles son en caso de tener,
//utilizando la función definida.

void ejercicio26() {
    double a, b, c;
    tuple<double, double> raices;
    cout << "Ingrese los terminos del polinomio: " << endl;
    cin >> a >> b >> c;

    if (tieneRaicesReales(a, b, c)) {
        tuple<double, double> raices = obtenerRaices(a, b, c);
        cout << "El polinomio tiene raices reales." << endl;
        cout << "Las raices son: x1 = " << get<0>(raices) << ", x2 = " << get<1>(raices) << endl;
    }
    else {
        cout << "El polinomio no tiene raices reales." << endl;
    }
}

//27) Hacer una función que indique si un número es primo o no.
bool esPrimo(int numero) {
    int divisores = 0;
    for (int i = 1; i <= numero; i++) {
        if ((numero % i) == 0) {
            divisores++;
        }
        
    }
    return divisores == 2;
}

void ejercicio27() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (esPrimo(numero)) {
        cout << "El numero ingresado es primo" << endl;
    }
    else {
        cout << "El numero ingresado no es primo" << endl;
    }
}
//28) Escribir una función que devuelva el máximo común divisor y el mínimo común
//múltiplo entre dos enteros.Nota: cuidado al modularizar(recordar que una
//	función solo tiene que realizar una tarea).

void ejercicio28() {
    int a, b;
    cout << "Ingrese dos enteros: " << endl;
    cin >> a >> b;
    cout << "Maximo comun divisor de " << a << " y " << b << ": " << maximoComunDivisor(a, b) << endl;
    cout << "Minimo comun multiplo de " << a << " y " << b << ": " << minimoComunMultiplo(a, b) << endl;
}
int maximoComunDivisor(int a, int b) {
    int resto;

    while (b != 0) {
        resto = a % b; 
        a = b; 
        b = resto;
    }

    return a; 
}
int minimoComunMultiplo(int a, int b) {
    return (a * b) / maximoComunDivisor(a, b);
}