#include <iostream>
#include "Header.h"
#include "Persona.h"
#include "Producto.h"
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
    cout << "Ejercicios de 13 a 23" << endl;
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
    cout << "Ejercicios de 24 a 28" << endl;
    cin >> seleccion;
    switch (seleccion) {
    case (0):
        break;
    case(24):
        ejercicio24();
        funciones();
        break;
    case(25):
        ejercicio25();
        funciones();
        break;
    case(26):
        ejercicio26();
        funciones();
        break;
    case(27):
        ejercicio27();
        funciones();
        break;
    case(28):
        ejercicio28();
        funciones();
        break;
    default:
        funciones();
    }
}
void vectoresYMatrices() {
    int seleccion = 0;
    cout << "---------------------------------------------" << endl;
    cout << "---------- 5. Vectores y matrices -----------" << endl;
    cout << "-------- Ingrese una de las opciones --------" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "0. Menu Principal" << endl;
    cout << " Ejercicios de 29 a 39" << endl;
    cin >> seleccion;
    switch (seleccion) {
    case (0):
        break;
    case (29):
        ejercicio29();
        vectoresYMatrices();
        break;
    case (30):
        ejercicio30();
        vectoresYMatrices();
        break;
    case (31):
        ejercicio31();
        vectoresYMatrices();
        break;
    case (32):
        ejercicio32();
        vectoresYMatrices();
        break;
    case (33):
        ejercicio33();
        vectoresYMatrices();
        break;
    case (34):
        ejercicio34();
        vectoresYMatrices();
        break;
    case (35):
        ejercicio35();
        vectoresYMatrices();
        break;
    case (36):
        ejercicio36();
        vectoresYMatrices();
        break;
    case (37):
        ejercicio37();
        vectoresYMatrices();
        break;
    case (38):
        ejercicio38();
        vectoresYMatrices();
        break;
    case (39):
        ejercicio39();
        vectoresYMatrices();
        break;
    default:
        vectoresYMatrices();
    }
}
void registrosYTablas() {
    int seleccion = 0;
    cout << "---------------------------------------------" << endl;
    cout << "---------- 6. Registros y tablas ------------" << endl;
    cout << "-------- Ingrese una de las opciones --------" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "0. Menu Principal" << endl;
    cout << "Ejercicios de 40 a 42" << endl;
    cin >> seleccion;
    switch (seleccion) {
    case (0):
        break;
    case (40):
        ejercicio40();
        registrosYTablas();
        break;
    case (41):
        ejercicio41();
        registrosYTablas();
        break;
    case (42):
        ejercicio42();
        registrosYTablas();
        break;
    default:
        registrosYTablas();
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
        "5. Vectores y matrices" << endl;
    cout <<
        "6. Registros y tablas" << endl;
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
    case 5:
        vectoresYMatrices();
        menu();
        break;
    case 6:
        registrosYTablas();
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


