#ifndef OBSERVAR_H
#define OBSERVAR_H

#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <ctime>

#include "tiempo.h"
using namespace std;


void ingresarObservacion(vector<Observacion>& observaciones) {
    Observacion nuevaObservacion;
    std::string txt;
    cout << "Introduce la observacion del kit: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, txt);

    // Obtener la fecha y hora actual
    nuevaObservacion.texto = txt;
    nuevaObservacion.timestamp = chrono::system_clock::now();

    // Almacenar la observacion
    observaciones.push_back(nuevaObservacion);
    cout << "Se incorporo una nueva observacion del kit.\n";
}

// Funcion para mostrar todas las observaciones
void mostrarObservaciones(const vector<Observacion>& observaciones) {
    if (observaciones.empty()) {
        cout << "No hay observaciones para mostrar.\n";
    } else {
        for (const auto& obs : observaciones) {
            cout << "Fecha y hora: " << obs.getFechaHora() << "\n";
            cout << "Observacion: " << obs.texto << "\n";
            cout << "----------------------------\n";
        }
    }
}

#endif
