#include <iostream>
#include "Header.h"
using namespace std;

void estructurasSecuenciales() {
    int seleccion = 0;
    cout << "---------------------------------------------" << endl;
    cout << "-------- 1. Estructuras Secuenciales --------" << endl;
    cout << "-------- Ingrese una de las opciones --------" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "1. Imprimir numero" << endl;
    cout << "2. Operaciones sobre dos numeros " << endl;
    cout << "3. Saludar" << endl;
    cout << "4. Radio de una esfera " << endl;
    cout << "5. Base y altura de un rectangulo" << endl;
    cout << "0. Menu Principal" << endl;
    cin >> seleccion;
    cout << "Seleccionado: " << seleccion << endl;
    switch (seleccion){
        case (0):
            break;
        case (1):
            ejercicio1();
            estructurasSecuenciales();
            break;
        case (2):
            ejercicio2();
            estructurasSecuenciales();
            break;
        case (3):
            ejercicio3();
            estructurasSecuenciales();
            break;
        case (4):
            ejercicio4();
            estructurasSecuenciales();
            break;
        case (5):
            ejercicio5();
            estructurasSecuenciales();
            break;
        default:
            estructurasSecuenciales();
    }
}

void estructurasSelectivas() {
    int seleccion = 0;
    cout << "---------------------------------------------" << endl;
    cout << "--------- 2. Estructuras Selectivas ---------" << endl;
    cout << "-------- Ingrese una de las opciones --------" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "6. Mayor a cero " << endl;
    cout << "7. Mayor de dos reales" << endl;
    cout << "8. Es Par" << endl;
    cout << "9. Es divisible" << endl;
    cout << "10. Operarciones aritmeticas" << endl;
    cout << "11. Menu opciones" << endl;
    cout << "12. Segundos a dias-horas-minutos-segundos" << endl;
    cout << "0. Menu Principal" << endl;
    cin >> seleccion;
    switch (seleccion) {
        case (0):
            break;
        case (6):
            ejercicio6();
            estructurasSelectivas();
            break;
        case (7):
            ejercicio7();
            estructurasSelectivas();
            break;
        case (8):
            ejercicio8();
            estructurasSelectivas();
            break;
        case (9):
            ejercicio9();
            estructurasSelectivas();
            break;
        case (10):
            ejercicio10();
            estructurasSelectivas();
            break;
        case (11):
            ejercicio11();
            estructurasSelectivas();
            break;
        case (12):
            ejercicio12();
            estructurasSelectivas();
            break;
        default:
            estructurasSelectivas();
    }
}
void ciclos() {
    int seleccion = 0;
    cout << "---------------------------------------------" << endl;
    cout << "----------------- 3. Ciclos -----------------" << endl;
    cout << "-------- Ingrese una de las opciones --------" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "0. Menu Principal" << endl;
    cin >> seleccion;
    switch (seleccion) {
    case (13):
        ejercicio13();
        ciclos();
        break;
    case (14):
        ejercicio14();
        ciclos();
        break;
    case (15):
        ejercicio15();
        ciclos();
        break;
    case (16):
        ejercicio16();
        ciclos();
        break;
    case (17):
        ejercicio17();
        ciclos();
        break;
    case (18):
        ejercicio18();
        ciclos();
        break;
    case (19):
        ejercicio19();
        ciclos();
        break;
    case (20):
        ejercicio20();
        ciclos();
        break;
    case (21):
        ejercicio21();
        ciclos();
        break;
    case (22):
        ejercicio22();
        ciclos();
        break;
    case (23):
        ejercicio23();
        ciclos();
        break;
    case (0):
        break;
    default:
        ciclos();
    }
}
static void funciones() {
    int seleccion;
    cout << "---------------------------------------------" << endl;
    cout << "---------------- 4.Funciones ----------------" << endl;
    cout << "-------- Ingrese una de las opciones --------" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "0. Menu Principal" << endl;
    cin >> seleccion;
    switch (seleccion) {
    case (0):
        break;
    default:
        funciones();
    }
}

void menu() {
    int selection = 0;
    cout << "---------------------------------------------" << endl;
    cout << "-------- Ingrese una de las opciones --------" << endl;
    cout << "---------------------------------------------" << endl;
    cout << 
        "1. Estructuras Secuenciales" << endl;
    cout <<
        "2. Estructuras selectivas" << endl;
    cout <<
        "3. Ciclos" << endl;
    cout << 
        "4. Funciones" << endl;
    cout << 
        "0. Salida" << endl;
    cout << "---------------------------------------------" << endl;
    cin >> selection;
    switch (selection)
    {
    case 1:
        estructurasSecuenciales();
        menu();
        break;
    case 2:
        estructurasSelectivas();
        menu();
        break;
    case 3:
        ciclos();
        menu();
        break;
    case 4:
        funciones();
        menu();
        break;
    case 0: 
        break;
    default:
        menu();

    }
}

int main() {
    menu();

    return 0;
}


