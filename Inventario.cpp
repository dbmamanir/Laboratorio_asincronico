#include "Inventario.h"
#include <iostream>
using namespace std;

void insertarpiezas(Pieza pieza[]){
	pieza[0] = {"4255563",2,""};
	//añadir las demas piezas para el registro
}

void mostrarLista(const Pieza piezas []){
	for (int i=0; i<MAX_PIEZAS; i++){
		cout<<"Codigo:"<<piezas[i].cod<<", Cantidad:"<<piezas[i].cant<<", Observaciones:"<<piezas[i].obs<<endl;
	}
}

void mostrarCantidad(const Pieza piezas []){
	
}
