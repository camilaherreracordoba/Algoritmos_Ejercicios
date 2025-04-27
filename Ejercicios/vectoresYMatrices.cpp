#include <iostream>
#include <vector> 
#include <tuple>
#include <string>
#include "Header.h"
using namespace std;

//29) Desarrollar una función que devuelva en un vector los números primos entre 2 y
//200. Reutilizar lo que ya se escribió y probó.

void ejercicio29() {
	vector<int > primos;
	primos = numerosPrimosEntre(2, 200);
	imprimirVector(primos);
}

vector<int> numerosPrimosEntre(int a, int b) {
	vector<int> primos;
	for (int i = a; i < b; i++) {
		if (esPrimo(i)) {
			primos.push_back(i);
		}
	}
	return primos;
}

//30) Dados dos vectores A y B, de N elementos cada uno, se desean calcular :
//a.El vector suma.
//b.El producto escalar.

void ejercicio30() {
	vector<double> a = {5, 3, 7, 3 };
	vector<double> b = { -2, 7, 2, 1 };
	cout << "Vector suma: " << endl;
	imprimirVector(vectorSuma(a, b));
	cout << " Producto escalar: " << productoEscalar(a, b) << endl;
};

vector<double> vectorSuma(vector<double> a, vector<double> b) {
	vector<double> suma;
	if (a.size() == b.size()) {
		for (int i = 0; i < a.size(); i++) {
			suma.push_back((a[i] + b[i]));
		}
	}
	else {
		suma = {};
	}
	return suma;
}

double productoEscalar(vector<double> a, vector<double> b) {
	double producto = 0;
	if (a.size() == b.size()) {
		for (int i = 0; i < a.size(); i++) {
			producto += a[i] * b[i];
		}
	}
	return producto;
}

//31) Por cada alumno que rindió un examen de inglés se lee el número de padrón, y la
//nota obtenida.Se desea saber la cantidad de alumnos que rindieron el examen y el
//porcentaje de alumnos que obtuvieron cada nota.
double porcentajeNota(vector<tuple<string, int>> alumnos, int nota) {
	int cantidad = 0;
	for (int i = 0; alumnos.size() > i; i++) {
		if (get<1>(alumnos[i]) == nota) {
			cantidad++;
		}
	}
	if (cantidad != 0) { return 100/((double)alumnos.size()/cantidad); }
	else { return cantidad; }
}
void ejercicio31() {
	vector <tuple<string, int >> alumnos = { {"A101", 6}, { "A101", 10 },{"A102", 6}, {"A103", 6}, {"A104", 8}, {"A105", 7} };
	
	std::cout << "Alumnos que rindieron examen: " << alumnos.size() << endl;
	std::cout << "Porcentaje notas de alumnos: " << endl;

	for (int i = 1; i <= 10; i++) {
		std::cout << i << "-->" << (porcentajeNota(alumnos, i)) << "%" << endl;
	}
}
//32) Se carga un vector X de N elementos enteros.Escribir un algoritmo que devuelva
//un vector que tenga todos los elementos de X, pero sin elementos repetidos.
void ejercicio32() {
	vector<int> vectorX = { 11, 5, 7, 12, 5, 78, 11, 9, 0, 1 };
	
	imprimirVector(vectorX);
	imprimirVector(sinRepetidos(vectorX));
}

vector<int> sinRepetidos(vector<int> vectorX) {
	vector<int> resultado = {};
	int actual;

	for (int i = 0; i < vectorX.size(); i++) {
		actual = vectorX[i];
		if (!estaEnVector(resultado, actual)) {
			resultado.push_back(actual);
		}
	}
	return resultado;
}
bool estaEnVector(vector<int> vector, int numero) {
	for (int i = 0; i < vector.size(); i++) {
		if (numero == vector[i]) {
			return true;
		}
	}
	return false;
}
//33) Se leen dos vectores A y B, de N y M elementos respectivamente.Construir un
//algoritmo que halle los vectores unión e intersección de A y B.Previamente habrá
//que ordenarlos.
void ejercicio33() {

	vector<int> vectorA = { 7, 5, 1, 9, 11, 3 };
	vector<int> vectorB = { 45, 6, 4, 8, 9 ,1, 15 };
	vector<int> unionVectores = vectorUnion(vectorA, vectorB);
	vector<int> interseccionVectores = vectorInterseccion(vectorA, vectorB);

	cout << "vector A desordenado: " << endl;
	imprimirVector(vectorA);
	vectorA = ordenarVector(vectorA);
	cout << "vector B desordenado: " << endl;
	imprimirVector(vectorB);
	vectorB = ordenarVector(vectorB);

	cout << "vector A ordenado: " << endl;
	imprimirVector(vectorA);
	cout << "vector B ordenado: " << endl;
	imprimirVector(vectorB);

	cout << "Union de vectores A y B: " << endl;
	imprimirVector(unionVectores);
	cout << "Interseccion de vectores A y B" << endl;
	imprimirVector(interseccionVectores);
}

vector<int> ordenarVector(vector<int> vector) {
	int aux;
	for (int i = 0; i < vector.size(); i++) {
		for (int j = i + 1; j < vector.size(); j++) {
			if (vector[i] > vector[j]) {
				aux = vector[j];
				vector[j] = vector[i];
				vector[i] = aux;
			}
		}
	}
	return vector;
}

vector<int> vectorUnion(vector<int> vectorA, vector<int> vectorB) {
	vector<int> vecUnion;
	for (int i : vectorA) {
		if (!estaEnVector(vecUnion, i)) {
			vecUnion.push_back(i);
		}
	}
	for (int i : vectorB) {
		if (!estaEnVector(vecUnion, i)) {
			vecUnion.push_back(i);
		}
	}
	if (vecUnion.size() > 1) {
		return ordenarVector(vecUnion);
	}
	else { return vecUnion; }
}

vector<int> vectorInterseccion(vector<int> vectorA, vector<int> vectorB) {
	vector<int> vecInterseccion;
	for (int i : vectorA) {
		if (estaEnVector(vectorB, i)) {
			vecInterseccion.push_back(i);
		}
	}
	if (vecInterseccion.size() > 1) {
		
		return ordenarVector(vecInterseccion);
	}
	else { return vecInterseccion; }
}
// 34) Si los números de un vector representan los coeficientes de un polinomio (de grado no mayor a 10),
// escribir un algoritmo que calcule la especialización de ese polinomio
// con un número que elige el usuario.

void ejercicio34() {
	vector<double> coeficientes = { 4, -2, 1, 7, 9 };
	imprimirVector(coeficientes);
	cout << " Especializacion con 2: " << especializacion(coeficientes, 2) << endl;
}
double especializacion(vector<double> coeficientes, double numero) {
	double resultado = 0;
	for (int i = 0; i < coeficientes.size(); i++) {
		resultado += coeficientes[i] * potencia(numero, (coeficientes.size() - 1 - i));
	}
	return resultado;
}
// 35) Escribir un algoritmo que halle una matriz C como suma de dos matrices A y B.
// La dimensión de las matrices de M × N se lee como dato(suponer un MAX para fila y columna).
void ejercicio35() {
	int n, m;
	cout << "Ingrese las dimensiones de las matrices: " << endl;
	cin >> n >> m;
	vector<vector<int>> matrizA(n, vector<int>(m)); 
	vector<vector<int>> matrizB(n, vector<int>(m));

	cout << "Insertar valores de matriz A: " << endl;
	matrizA = insertarValoresMatriz(matrizA);
	cout << "Insertar valores de matriz B: " << endl;
	matrizB = insertarValoresMatriz(matrizB);

	cout << "Matriz A: " << endl;
	imprimirMatriz(matrizA);
	cout << "Matriz B: " << endl;
	imprimirMatriz(matrizB);
	cout << "Suma de matrices: " << endl;
	imprimirMatriz(sumarMatrices(matrizA, matrizB));
}

vector<vector<int>> sumarMatrices(vector<vector<int>> matrizA, vector<vector<int>> matrizB) {
	if (!tienenMismasDimensiones(matrizA, matrizB)) {
		return { {} };
	}
	else if (matrizA.size() == 0) {
		return { {} };
	}
	vector<vector<int>> resultados(matrizA.size(), vector<int>(matrizA[0].size()));
	for (int i = 0; i < matrizA.size(); i++) {
		for (int j = 0; j < matrizA[i].size(); j++) {
			resultados[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}
	return resultados;
}

bool tienenMismasDimensiones(vector<vector<int>> matrizA, vector<vector<int>> matrizB) {
	
	if (matrizA.size() != matrizB.size()) {
		return false;
	}

	for (int i = 0; i < matrizA.size(); i++) {
		if (matrizA[i].size() != matrizB[i].size()) {
			return false;
		}
	}

	return true; 
}

vector<vector<int>> insertarValoresMatriz(vector<vector<int>> matriz) {
	int entrada;
	for (int i = 0; i < matriz.size(); i++) {
		for (int j = 0; j < matriz[i].size(); j++) {
			cout << "Ingrese un numero en la matriz: ";
			cin >> entrada;
			matriz[i][j] = entrada;
		}
	}
	return matriz;
}

void imprimirMatriz(vector<vector<int>> matriz) {
	if (matriz.size() > 0) {
		for (int i = 0; i < matriz.size(); i++) {
			if (matriz[i].size() > 0) {
				cout << "[";
				for (int j = 0; j < matriz[0].size() - 1; j++) {
					cout << matriz[i][j] << ", ";
				}
				cout << matriz[i][matriz[0].size() - 1];
				cout << "]" << endl;
			}
			else {
				cout << "[]" << endl;
			}
		}
	}
	else { cout << "[]" << endl; }
}

//36) Escribir un algoritmo que halle un vector cuyos elementos son la suma de los elementos de cada fila de una matriz previamente ingresada.

void ejercicio36() {
	int n, m;
	cout << "Ingrese las proporciones de la matriz: " << endl;
	cin >> n >> m;
	vector<vector<int>> matriz(n, vector<int>(m));
	matriz = insertarValoresMatriz(matriz);
	cout << "Matriz: " << endl;
	imprimirMatriz(matriz);
	cout << "Suma de los elementos de cada fila de la matriz: " << endl;
	imprimirVector(sumaFilasMatriz(matriz));
}

vector<int> sumaFilasMatriz(vector<vector<int>> matriz) {  
	vector<int> resultado(matriz.size(), 0); 
	for (int i = 0; i < matriz.size(); i++) {  
		for (int j = 0; j < matriz[i].size(); j++) {  
			resultado[i] += matriz[i][j];  
		}  
	}  
	return resultado;  
}
//37) Escribir un programa que calcule la traza de una matriz cuadrada.Recordar que la
//traza de una matriz es la suma de los elementos de su diagonal principal.
void ejercicio37() {
	int n, m;
	cout << "Ingrese las proporciones de la matriz: " << endl;
	cin >> n >> m;
	vector<vector<int>> matriz(n, vector<int>(m));
	matriz = insertarValoresMatriz(matriz);
	cout << "Matriz: " << endl;
	imprimirMatriz(matriz);
	cout << "Traza: " << traza(matriz) << endl;
}

int traza(vector<vector<int>> matriz) {
	int resultado = 0;
	if (esCuadrada) {
		for (int i = 0; i < matriz.size(); i++) {
			resultado += matriz[i][i];
		}
	}
	return resultado;
}

bool esCuadrada(vector<vector<int>> matriz) {
	if (matriz.size() == 0) {
		return true;
	}
	if (matriz.size() == matriz[0].size()) {
		return true;
	}
	else return false;
}
//38) Escribir un algoritmo que determine si una matriz cuadrada ingresada es la matriz
//identidad. Optimizar el código.
void ejercicio38() {
	int n, m;
	cout << "Ingrese las proporciones de la matriz: " << endl;
	cin >> n >> m;
	vector<vector<int>> matriz(n, vector<int>(m));
	matriz = insertarValoresMatriz(matriz);
	cout << "Matriz: " << endl;
	imprimirMatriz(matriz);
	if (esMatrizIdentidad(matriz)) {
		cout << "Es matriz identidad" << endl;
	}
	else {
		cout << "No es matriz identidad" << endl;
	}
}

bool esMatrizIdentidad(vector<vector<int>> matriz) {
	if (!esCuadrada(matriz)) {
		return false;
	} 
	for (int i = 0; i < matriz.size(); i++) {
		for (int j = 0; j < matriz[i].size(); j++) {
			if (i == j) {
				if (matriz[i][j] != 1) { return false; }
			}
			else {
				if (matriz[i][j] != 0) { return false; }
			}
		}
	}
	return true;
}
//39) Escribir un algoritmo que construya un vector con los valores mínimos de cada una
//de las filas de una matriz.

void ejercicio39() {
	int n, m;
	cout << "Ingrese las proporciones de la matriz: " << endl;
	cin >> n >> m;
	vector<vector<int>> matriz(n, vector<int>(m));
	matriz = insertarValoresMatriz(matriz);
	cout << "Matriz: " << endl;
	imprimirMatriz(matriz);
	cout << "Valores minimos" << endl;
	imprimirVector(valoresMinimos(matriz));
}

vector<int> valoresMinimos(vector<vector<int>> matriz) {
	vector<int> minimos(matriz.size(), 0);
	for (int i = 0; i < matriz.size(); i++) {
		int minimo = matriz[i][0];
		for (int j = 0; j < matriz[i].size(); j++) {
			if (minimo > matriz[i][j]) {
				minimo = matriz[i][j];
			}
		}
		minimos[i] = minimo;
	}
	return minimos;
}