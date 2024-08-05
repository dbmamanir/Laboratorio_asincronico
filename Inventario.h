#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "Piezas.h"

const int MAX_PIEZAS = 10000;

void insertarpiezas(Pieza piezas []);
void mostrarLista(const Pieza piezas []);
void mostrarCantidad(const Pieza piezas []);
void agregarObservacion(Pieza piezas[], int cod, const std::string obs);
void buscarPieza(const Pieza piezas[], int cod);

#endif
