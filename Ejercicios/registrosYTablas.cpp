#include <iostream>
#include <vector> 
#include <tuple>
#include <string>
#include "Producto.h"
#include "Persona.h"
#include "Header.h"

using namespace std;

//40) Definir un struct Persona, donde se pueda almacenar su nombre, y el número de
//teléfono.

void imprimirPersona(Persona persona) {
	cout << persona.nombre << " " << persona.numero << endl;
}
void ejercicio40() {
	string nombre;
	int numero;
	cout << "Ingrese un nombre: ";
	cin >> nombre;
	cout << "Ingrese un numero: ";
	cin >> numero;
	Persona persona = Persona(nombre, numero);
	imprimirPersona(persona);
}
//41) Definir un vector Agenda, en donde se pueda guardar los datos de, a lo sumo, 50
//personas (definidas en el ej. anterior) y permita:
void ejercicio41() {
	vector<Persona> agenda;
	menuAgenda(agenda);
	
}
void menuAgenda(vector<Persona> agenda) {
	int opcion, numero, nuevo;
	string nombre;

	cout << "--------Menu agenda --------" << endl;
	cout << "1. Datos de contactos" << endl;
	cout << "2. Buscar numero" << endl;
	cout << "3. Buscar nombre " << endl;
	cout << "4. Agregar contacto " << endl;
	cout << "Ingrese una opcion: " << endl;
	cin >> opcion;
	switch (opcion) {
	case 0:
		break;
	case 1:
		cargarDatos(agenda);
		menuAgenda(agenda);
		break;
	case 2:
		cout << "Ingresar nombre: ";
		cin >> nombre;
		cout << buscarNumero(agenda, nombre) << endl;
		menuAgenda(agenda);
		break;
	case 3:
		cout << "Ingresar numero: ";
		cin >> numero;
		cout << buscarNombre(agenda, numero) << endl;
		menuAgenda(agenda);
		break;
	case 4:
		cargarContacto(agenda);
		menuAgenda(agenda);
		break;
	case 5:
		cout << "Indicar numero a cambiar: ";
		cin >> numero;
		cout << "Indicar numero nuevo: ";
		cin >> nuevo;
		modificarNumero(agenda, numero, nuevo);
		menuAgenda;
	case 6:
		cout << "Indicar nombre de la persona a eliminar: ";
		cin >> nombre;
		eliminarContacto(agenda, nombre);
	default:
		menuAgenda(agenda);
	}
	
}
//a. Cargar los datos en la Agenda.

void cargarDatos(vector<Persona>& agenda) {
	string entrada = "";
	while (entrada != "n" || agenda.size() >= 50) {
		cargarContacto(agenda);
		cout << "Continuar? (marcar n para salir) " << endl;
		cin >> entrada;
	}
}


//b. Poder buscar el teléfono de una persona indicando su nombre.
int buscarNumero(vector<Persona> agenda, string nombre) {
	for (int i = 0; i < agenda.size(); i++) {
		if (agenda[i].nombre == nombre) {
			return agenda[i].numero;
		}
	}
	cout << "Persona no encontrada";
	return 0;
}
//c. Poder buscar el nombre de una persona indicando su teléfono.
string buscarNombre(vector<Persona> agenda, int numero) {
	for (int i = 0; i < agenda.size(); i++) {
		if (agenda[i].numero == numero) {
			return agenda[i].nombre;
		}
	}
	cout << "Persona no encontrada";
	return " ";
}
//d. Poder modificar el número de teléfono de alguna persona.

void modificarNumero(vector<Persona>& agenda, int numero, int nuevo) {
	for (int i = 0; i < agenda.size(); i++) {
		if (agenda[i].numero == numero) {
			agenda[i].numero = nuevo;
		}
	}
	cout << "Persona no encotrada" << endl;
}
//e. Poder agregar un nuevo contacto.
void cargarContacto(vector<Persona>& agenda) {
	string nombre;
	int numero;
	if (agenda.size() >= 50) {
		cout << "Agenda llena" << endl;
	}
	cout << "Ingresar nombre: " << endl;
	cin >> nombre;
	cout << "Ingresar numero: " << endl;
	cin >> numero;

	agenda.push_back(Persona(nombre, numero));
}
//f. Poder dar de baja a un contacto.
void eliminarContacto(vector<Persona>& agenda, string nombre) {
	for (int i = 0; i < agenda.size(); i++) {
		if (agenda[i].nombre == nombre) {
			agenda.erase(agenda.begin() + i);
		}
	}
}
//42) Definir un vector Gondola en donde puedan almacenar datos de a lo sumo 50
//productos del supermercado. Cada producto se define por su nombre, código de
//barras, precio y un indicador si está en oferta o no (si estuviera en oferta al precio
//se le debe descontar un 10%).
//La aplicación debe permitir mediante un menú de opciones:

void ejercicio42() {
	vector<Producto> gondola, chango;
	menuGondola(gondola, chango);
}
void menuGondola(vector<Producto>& gondola, vector<Producto>& chango) {
	int opcion;
	string nombre, codigo;
	double precio;
	cout << "-------- Menu gondola --------" << endl;
	cout << "1. Cargar producto" << endl;
	cout << "2. Buscar producto por nombre" << endl;
	cout << "3. Buscar producto por codigo" << endl;
	cout << "4. Cambiar precio de producto" << endl;
	cout << "5. Quitar un producto" << endl;
	cout << "6. obtener cantidad de producto en oferta" << endl;
	cout << "7. Cargar changuito " << endl;
	cin >> opcion;
	switch (opcion) {
	case 0:
		break;
	case 1:
		cargarProducto(gondola);
		menuGondola(gondola, chango);
		break;
	case 2:
		cout << "Ingrese el nombre del producto: " << endl;
		cin >> nombre;
		buscarProductoPorNombre(gondola, nombre);
		menuGondola(gondola, chango);
		break;
	case 3:
		cout << "Ingrese el codigo del producto: " << endl;
		cin >> codigo;
		buscarProductoPorCodigo(gondola, codigo);
		menuGondola(gondola, chango);
		break;
	case 4:
		cout << "Ingresar el codigo de barras: " << endl;
		cin >> codigo;
		cout << "Ingresar el nuevo precio: " << endl;
		cin >> precio;
		modificarPrecio(gondola, codigo, precio);
		menuGondola(gondola, chango);
		break;
	case 5:
		cout << "Ingresar el codigo de barras " << endl;
		cin >> codigo;
		quitarProducto(gondola, codigo);
		menuGondola(gondola, chango);
		break;
	case 6:
		cout << "Cantidad de productos en oferta: " << cantidadProductosEnOferta(gondola) << endl;
		menuGondola(gondola, chango);
	case 7:
		cout << "---------- Cargar Changuito ----------" << endl;
		cargarChango(gondola, chango);
		menuGondola(gondola, chango);
		break;
	default:
		menuGondola(gondola, chango);
	}
}
//a. Cargar productos en el vector.
void cargarProducto(vector<Producto>& gondola) {
	if (gondola.size() >= 50) {
		cout << "La gondola llena." << endl;
		return;
	}
	string nombre, codigoBarras;
	double precio;
	bool enOferta;
	cout << "Ingrese el nombre del producto: ";
	cin >> nombre;
	cout << "Ingrese el codigo de barras: ";
	cin >> codigoBarras;
	cout << "Ingrese el precio: ";
	cin >> precio;
	cout << "Esta en oferta? (1 para si, 0 para no): ";
	cin >> enOferta;

	gondola.push_back(Producto(nombre, codigoBarras, precio, enOferta));
	cout << "Producto agregado " << endl;
}

//b. Buscar un producto indicando su nombre.
void buscarProductoPorNombre(const vector<Producto>& gondola, string nombre) {
	for (int i = 0; i < gondola.size(); i++) {
		if (gondola[i].getNombre() == nombre) {
			cout << "Producto encontrado: " << endl;
			gondola[i].print();
			return;
		}
	}
	cout << "Producto no encontrado." << endl;
}
//c. Buscar un producto por código de barra.
void buscarProductoPorCodigo(const vector<Producto>& gondola, string codigoBarras) {
	for (int i = 0; i < gondola.size(); i++) {
		if (gondola[i].getCodigoBarras() == codigoBarras) {
			cout << "Producto encontrado: " << endl;
			gondola[i].print();
			return;
		}
	}
	cout << "Producto no encontrado." << endl;
}
//d. Poder modificar el precio de algún producto.

void modificarPrecio(vector<Producto>& gondola, string codigoBarras, double nuevoPrecio) {
	for (int i = 0; i < gondola.size(); i++) {
		if (gondola[i].getCodigoBarras() == codigoBarras) {
			gondola[i].setPrecio(nuevoPrecio);
			cout << "Precio cambiado" << endl;
			gondola[i].print();
			return;
		}
	}
}
//e. Quitar un producto que esté en el vector.
void quitarProducto(vector<Producto>& gondola, string codigoBarras) {
	for (int i = 0; i < gondola.size(); i++) {
		if (gondola[i].getCodigoBarras() == codigoBarras) {
			cout << "Quitando producto: ";
			gondola[i].print();
			gondola.erase(gondola.begin() + i);
			cout << "Producto quitado" << endl;
			return;
		}
	}
}
//f. Indicar la cantidad de productos en oferta.
int cantidadProductosEnOferta(vector<Producto> gondola) {
	int cantidad = 0;
	for (int i = 0; i < gondola.size(); i++) {
		if (gondola[i].isEnOferta()) {
			cantidad++;
		}
	}
	return cantidad;
}
//g. Cargar productos de Gondola en un nuevo vector Chango, indicando
//luego: monto a abonar y ahorro total teniendo en cuenta los productos
//en oferta
void cargarChango(const vector<Producto>& gondola, vector<Producto>& changuito) {
	double montoTotal = 0;
	double ahorroTotal = 0;
	string codigo;
	char continuar = 's';

	while (continuar == 's' && changuito.size() < 10) {
		cout << "Ingrese el codigo de barras del producto: " << endl;
		cin >> codigo;
		for (int i = 0; i < gondola.size(); i++) {
			if (gondola[i].getCodigoBarras() == codigo) {
				changuito.push_back(gondola[i]);
				cout << "producto agregado a changuito" << endl;
				gondola[i].print();
				break;
			}
		}
		cout << "continuar cargando al changuito? (s/n)" << endl;
		cin >> continuar;
	}

	for (int i = 0; i < changuito.size(); i++) {
		if (changuito[i].isEnOferta()) {
			montoTotal += changuito[i].getPrecio();
			ahorroTotal += (changuito[i].getPrecio()/0.9)*0.1;
		}
		else {
			montoTotal += changuito[i].getPrecio();
		}
	}
	cout << "Monto total a abonar: $" << montoTotal << endl;
	cout << "Ahorro: $" << ahorroTotal << endl;
}
Producto::Producto(string nombre, string codigoBarras, double precio, bool enOferta)
	: nombre(nombre), codigoBarras(codigoBarras), precio(precio), enOferta(enOferta) {
}
void Producto::print() const {
	cout << "Nombre: " << getNombre() << ", Precio: " << getPrecio() << ", En oferta: " << (isEnOferta() ? "Si" : "No") << endl;
}
string Producto::getNombre() const {
	return nombre;
}

string Producto::getCodigoBarras() const {
	return codigoBarras;
}

double Producto::getPrecio() const {
	return enOferta ? precio * 0.9 : precio;
}

bool Producto::isEnOferta() const {
	return enOferta;
}

void Producto::setPrecio(double nuevoPrecio) {
	precio = nuevoPrecio;
}

void Producto::setEnOferta(bool oferta) {
	enOferta = oferta;
}