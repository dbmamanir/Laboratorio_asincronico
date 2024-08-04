#include <iostream>
#include <stdio.h>
//#include " " se incluiran mas adelante las librerias necesarias 

#define MAX_PIEZAS 10000
using namespace std;
int main(){

	int opcion;
	cout<<"\n";
	cout<<"\t-------------------------------\n";
	cout<<"\tBIENVENIDO A KIT LEGO MINDSTORM\n";
	cout<<"\t-------------------------------\n";
	system ("pause");
	system ("cls");
	
	do{
		system ("cls");
        cout<<"\tOPCIONES PARA EL INVENTARIADO DEL KIT LEGO MINDSTORM \n";
        cout<<"\n";
        cout<<"1. MOSTRAR TODA LA LISTA\n"; 
        cout<<"2. MOSTRAR CANTIDAD DE PIEZAS POR CADA ESPECIE\n"; //se mostrara la cantidad de piezas de uno en especifico
        cout<<"3. INSERTAR ALGUNA OBSERVACION DEL KIT\n";
        cout<<"4. INSERTAR OBSERVACION DE ALGUNA PIEZA DEL KIT\n";
        cout<<"5. BUSCAR PIEZA Y MOSTRAR SI TIENE ALGUNA OBSERVACION\n"; //falta de piezas, o si algo está roto
        cout<<"0. SALIR\n";
        cout<<"Seleccione una opcion:";
        cin>>opcion;
	}while (opcion != 0);
	
	return 0;
}
