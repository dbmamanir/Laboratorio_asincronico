#include <iostream>
#include <stdio.h>

#include "Inventario.h"

#define MAX_PIEZAS 10000
using namespace std;

int ui() {    //interfaz de usuario
	system ("pause");
	system ("cls");
   int opcion;
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
      cout << "2. MOSTRAR CANTIDAD DE PIEZAS POR CADA ESPECIE\n";  //se mostrara la cantidad de piezas de uno en especifico
      cout << "3. INSERTAR ALGUNA OBSERVACION DEL KIT\n";
      cout << "4. INSERTAR OBSERVACION DE ALGUNA PIEZA DEL KIT\n";
      cout << "5. BUSCAR PIEZA Y MOSTRAR SI TIENE ALGUNA OBSERVACION\n"; //falta de piezas, o si algo está roto
      cout << "0. SALIR\n";
      cout << "Seleccione una opcion:";
      cin >> opcion;
    } while (opcion != 0);

    switch (opcion) {
        case 1: {
            break;
        }
        case 2: {
            break;
        }
        case 3: {
            break;
        }
        case 4: {
            break;
        }
        case 5: {
            break;
        }
        case 0: {
            cout << "Saliendo del inventario\n";
            exit(0);
            break;
        }
        default: {
            cout << "Opcion no valida, por favor intente de nuevo\n";
            break;
        }
    }

   return 0;
}

int main() {
   std::string user, pass;  //usuario, contraseña
   int intentos = 0, max_intentos = 3;

   do {
   system ("pause");
	system ("cls");
        cout << "Por favor, ingrese el usuario: ";
        cin >> user;

        cout << "Por favor, ingrese la contraseña: ";
        cin >> pass;

        if (user == "admin" && pass == "12345") {
            cout << "Bienvenid@! " + user + "\n";
            ui();
        } else {
            ++intentos;
            if (intentos >= max_intentos) {
                cout << "Se ha superado el maximo de intentos. Saliendo del programa...\n";
                exit(0);
                return 1; // codigo 1 = error
            }
            cout << "Usuario y/o contraseña incorrectos! Inténtelo de nuevo. Tienes " << max_intentos - intentos << " intentos restantes.\n";
        }
   system ("pause");
	system ("cls");
    } while (intentos < max_intentos);
}
