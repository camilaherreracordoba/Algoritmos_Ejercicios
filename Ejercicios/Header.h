#include <vector> 
#ifndef Ejercicios_H
#define Ejercicios_H

using namespace std; 

// estructuras secuenciales
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
double volumen(double radio);
double superficie(double radio);
void ejercicio5();
double perimetro(double base, double altura);
double superficieRectangulo(double base, double altura);
// estructuras selectivas
void ejercicio6();
void ejercicio7();
void ejercicio8();
bool esPar(double numero);

void ejercicio9();
bool esDivisible(int numero, int divisor);
void ejercicio10();
void ejercicio10Menu(double numero, double otroNumero);

void ejercicio11();

void ejercicio12();
// ciclos 
void ejercicio13();
void ejercicio14();
double factorial(int numero);
double factorialIterativo(int numero);
void ejercicio14Menu(int numero);
void ejercicio15();

void ejercicio16();
double valorMaximo(vector<double> numeros); 
double valorMinimo(vector<double> numeros);
int posicion(vector<double> numeros, double numero);

void ejercicio17();
int apariciones(vector<double> numeros, double numero);

void ejercicio18();
int mutiplicacionPorSumaSucesiva(int numeroA, int numeroB);

void ejercicio19();


void ejercicio20();
tuple<string, double> obtenerMenorSalario(vector<tuple<string, double>>);


void ejercicio21();
bool estaOrdenado(vector<double> numeros);
bool estaEnOrdenAscendente(vector<double> numeros);
bool estaEnOrdenDescendente(vector<double> numeros);
void imprimirVector(vector<double> vector);

void ejercicio22();
double fahrenheitACelsius(double grados);

void ejercicio23();
void imprimirLotes(vector<vector<double>> lotes);
double media(vector<double> lote);
double mediaTotal(vector<vector<double>> lotes);
#endif
