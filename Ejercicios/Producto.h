#pragma once
#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto {
    private:
        string nombre;
        string codigoBarras;
        double precio;
        bool enOferta;

    public:
        Producto(string nombre, string codigoBarras, double precio, bool enOferta);
        void print() const;
        string getNombre() const;
        string getCodigoBarras() const;
        double getPrecio() const;
        bool isEnOferta() const;
        void setPrecio(double nuevoPrecio);
        void setEnOferta(bool oferta);
};
void menuGondola(vector<Producto>& gondola, vector<Producto>& chango);
void cargarProducto(vector<Producto>& gondola);
void buscarProductoPorNombre(const vector<Producto>& gondola, string nombre);
void buscarProductoPorCodigo(const vector<Producto>& gondola, string codigoBarras);
void modificarPrecio(vector<Producto>& gondola, string codigoBarras, double nuevoPrecio);
void quitarProducto(vector<Producto>& gondola, string codigoBarras);
int cantidadProductosEnOferta(vector<Producto> gondola);
void cargarChango(const vector<Producto>& gondola, vector<Producto>& changuito);
#endif // PRODUCTO_H
