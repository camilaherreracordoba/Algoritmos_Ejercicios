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
void imprimirVector(vector<int> vector);

void ejercicio22();
double fahrenheitACelsius(double grados);

void ejercicio23();
void imprimirLotes(vector<vector<double>> lotes);
double media(vector<double> lote);
double mediaTotal(vector<vector<double>> lotes);

void ejercicio24();
double potencia(double numero, int exponente);
double discriminante(double a, double b, double c);
bool tieneRaicesReales(double a, double b, double c);
void imprimirPolinomio(double a, double b, double c);

void ejercicio25();
tuple<double, double> obtenerRaices(double a, double b, double c);

void ejercicio26();

void ejercicio27();
bool esPrimo(int numero);

void ejercicio28();
int maximoComunDivisor(int a, int b);
int minimoComunMultiplo(int a, int b);

// vectores y matrices 

void ejercicio29();
vector<int> numerosPrimosEntre(int a, int b);

void ejercicio30();
vector<double> vectorSuma(vector<double> a, vector<double> b);
double productoEscalar(vector<double> a, vector<double> b);

double porcentajeNota(vector<tuple<string, int>> alumnos, int nota);
void ejercicio31();

void ejercicio32();
vector<int> sinRepetidos(vector<int> vectorX);
bool estaEnVector(vector<int> vector, int numero);

void ejercicio33();
vector<int> ordenarVector(vector<int> vector);
vector<int> vectorUnion(vector<int> vectorA, vector<int> vectorB);
vector<int> vectorInterseccion(vector<int> vectorA, vector<int> vectorB);

void ejercicio34();
double especializacion(vector<double> coeficientes, double numero);

void ejercicio35();
void imprimirMatriz(vector<vector<int>> matriz);
vector<vector<int>> insertarValoresMatriz(vector<vector<int>> matriz);
vector<vector<int>> sumarMatrices(vector<vector<int>> matrizA, vector<vector<int>> matrizB);
bool tienenMismasDimensiones(vector<vector<int>> matrizA, vector<vector<int>> matrizB);

void ejercicio36();
vector<int> sumaFilasMatriz(vector<vector<int>> matriz);

void ejercicio37();
bool esCuadrada(vector<vector<int>> matriz);
int traza(vector<vector<int>> matriz);

void ejercicio38();
bool esMatrizIdentidad(vector<vector<int>> matriz);

void ejercicio39();
vector<int> valoresMinimos(vector<vector<int>> matriz);

// registros y tablas
void ejercicio40();

void ejercicio41();
void ejercicio42();
#endif
