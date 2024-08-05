#include <iostream>
#include <stdio.h>

#include "inventario.h"
//#include " " se incluiran mas adelante las librerias necesarias

#define MAX_PIEZAS 10000
using namespace std;

int ui() {
    int opcion;
    cout << "\n";
    cout << "Inicializando el inventario...";
   system ("pause");
   system ("cls");
    inicializarInventario();
    cout << "\n";
    cout << "\t-------------------------------\n";
    cout << "\tBIENVENIDO A KIT LEGO MINDSTORM\n";
    cout << "\t-------------------------------\n";
   system ("pause");
   system ("cls");

    do {
        system("cls");
        cout << "\tOPCIONES PARA EL INVENTARIADO DEL KIT LEGO MINDSTORM \n";
        cout << "\n";
        cout << "1. MOSTRAR TODA LA LISTA\n";
        cout << "2. MOSTRAR CANTIDAD DE PIEZAS POR CADA ESPECIE\n";
        //se mostrara la cantidad de piezas de uno en especifico
        cout << "3. INSERTAR OBSERVACION DE ALGUNA PIEZA DEL KIT\n";
        cout << "0. SALIR\n";
        cout << "Seleccione una opcion:";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                mostrarLista();
                cout << "\n";
                cout << "\n";
                system("pause");
                break;
            }
            case 2: {
            	std::string codigoPorBuscar;
                cout << "Porfavor ingrese el codigo:";
                cin >> codigoPorBuscar;
                mostrarCantidad(codigoPorBuscar);
                system("pause");
                break;
            }
            case 3: {
                break;
            }
            case 0: {
                cout << "Saliendo del inventario\n";
                break;
            }
            default: {
                cout << "Opcion no valida, por favor intente de nuevo\n";
                break;
            }
        }
    } while (opcion != 0);
    return 0;
}

int main() {
    std::string user, pass;
    int intentos = 0, max_intentos = 3, se_logueo = 0;

    do {
        cout << "Por favor, ingrese el usuario: ";
        cin >> user;

        cout << "Por favor, ingrese la contraseña: ";
        cin >> pass;

        if (user == "admin" && pass == "12345") {
            se_logueo = 1;
            cout << "Bienvenid@! " + user + "\n";
            ui();
        } else {
            ++intentos;
            if (intentos >= max_intentos) {
                cout << "Máximo número de intentos alcanzado. Saliendo...\n";
                return 1; // codigo 1 = error
            }
            cout << "Usuario y/o contraseña incorrectos! Inténtelo de nuevo. Tienes " << max_intentos - intentos <<
                    " intentos restantes.\n";
        }
    } while (intentos < max_intentos && se_logueo != 1);
   
}

