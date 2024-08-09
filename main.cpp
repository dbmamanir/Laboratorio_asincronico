#include <iostream>
#include <stdio.h>
#include <vector>

#include "inventario.h"
#include "observar.h"
//#include " " se incluiran mas adelante las librerias necesarias

#define MAX_PIEZAS 10000
using namespace std;

int ui() {
    int opcion;
    vector<Observacion> observaciones;
    cout << "\n";
    cout << "Inicializando el inventario...\n";
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
        cout << "OPCIONES PARA EL INVENTARIADO DEL KIT LEGO MINDSTORM \n";
        cout << "\n";
        cout << "1. MOSTRAR TODA LA LISTA\n";
        cout << "2. MOSTRAR EL ESTADO DE ALGUNA PIEZA\n";
        //se mostrara la cantidad de piezas de uno en especifico
        cout << "3. INSERTAR ALGUNA OBSERVACION DE PIEZA\n";
        cout << "4. INSERTAR OBSERVACIONES GENERALES DEL KIT\n";
        cout << "5. MOSTRAS LAS OBSERVACIONES GENERALES\n";
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
                string codigoPorBuscar;
                cout << "Porfavor ingrese el codigo:";
                cin >> codigoPorBuscar;
                mostrarCantidad(codigoPorBuscar);
                system("pause");
                break;
            }
            case 3: {
                string codigoPorBuscar, nuevaObservacion;
                cout << "Porfavor ingrese el codigo:";
                cin >> codigoPorBuscar;
                cout << "Porfavor ingrese la observacion:";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::getline(std::cin, nuevaObservacion);
                agregarObservacion(codigoPorBuscar, nuevaObservacion);
                system("pause");
                break;
            }
            case 4: {
                ingresarObservacion(observaciones);
                system("pause");
                break;
            }
            case 5: {
                mostrarObservaciones(observaciones);
                system("pause");
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

        cout << "Por favor, ingrese la contrasena: ";
        cin >> pass;

        if (user == "admin" && pass == "12345") {
            se_logueo = 1;
            cout << "Bienvenid@! " + user + "\n";
        } else {
            ++intentos;
            if (intentos >= max_intentos) {
                cout << "Maximo número de intentos alcanzado. Saliendo...\n";
                return 1; // codigo 1 = error
            }
            cout << "Usuario y/o contrasena incorrectos.\n Intentelo de nuevo. Tienes " << max_intentos - intentos <<
                    " intentos restantes.\n";
        }
    } while (intentos < max_intentos && se_logueo != 1);
    ui();
}
