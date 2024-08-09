#ifndef TIEMPO_H
#define TIEMPO_H

#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <ctime>

struct Observacion {
    std::string texto = "text";
    std::chrono::system_clock::time_point timestamp;

    // Método para formatear el timestamp a una cadena legible
    std::string getFechaHora() const {
        std::time_t tiempo = std::chrono::system_clock::to_time_t(timestamp);
        std::tm* tm = std::localtime(&tiempo);

        // Buffer para la fecha y hora formateada
        char buffer[100];
        // Formatear la fecha y hora en el buffer
        std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", tm);

        return std::string(buffer);
    }
};

#endif
