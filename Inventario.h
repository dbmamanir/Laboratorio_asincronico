#ifndef PIEZAS_H
#define PIEZAS_H

#include <string>
#include "Piezas.h"

const int MAX_PIEZAS = 10000;

void insertarpiezas(Piezas pieza []);
void mostrarLista(const Piezas pieza []);
void mostrarCantidad(const Piezas pieza []);
void agregarObservacion(Piezas pieza[], int cod, const std::string obs);
void buscarPieza(const Piezas pieza [], int cod);

#endif
