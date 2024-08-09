#ifndef PIEZAS_H
#define PIEZAS_H

#include <string>

struct Pieza {
    std::string cod; //codigo
    int cant; //cantidad de piezas
    std::string obs; //observacion de la pieza

    // constructor
    // Pieza(std::string codParam, int cantParam, std::string obsParam) : cod(codParam), cant(cantParam), obs(obsParam) {
    // }
};

#endif //piezas