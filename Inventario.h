#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <iostream>

#include "Piezas.h"
using namespace std;

const int MAX_PIEZAS = 86;
Pieza inventario[MAX_PIEZAS];

void agregarPieza(Pieza piezas[]);

void mostrarLista() {
    for (int i = 0; i < MAX_PIEZAS; ++i) {
        cout << "Pieza " << i + 1 << ":\n";
        cout << "  Codigo: " << inventario[i].cod << "\n";
        cout << "  Cantidad: " << inventario[i].cant<< "\n";
        cout << "  Observaciones: " << (!inventario[i].obs.empty() ? inventario[i].obs: "*No tiene observaciones*") << "\n";
        cout << "------------------------" << "\n";
    }
}

void mostrarCantidad(std::string codigo) {
    bool piezaEncontrada = false;
    for (int i = 0; i < 86; ++i) {
        if (inventario[i].cod == codigo) {
            cout << "Pieza encontrada:" << "\n";
            cout << "  Codigo: " << inventario[i].cod << "\n";
            cout << "  Cantidad: " << inventario[i].cant<< "\n";
            cout << "  Observaciones: " << (!inventario[i].obs.empty() ? inventario[i].obs: "Ninguna*") << "\n";
            piezaEncontrada = true;
            break;
        }
    }
    if (!piezaEncontrada) {
        cout << "Pieza con codigo " << codigo << " no encontrada en el inventario." << "\n";
    }
}

void agregarObservacion(std::string codigo, std::string observacion);

void buscarPieza(const Pieza piezas[], int cod);

void inicializarInventario() {
    inventario[0] = {"4255563", 2, ""};
    inventario[1] = {"4177430", 2, ""};
    inventario[2] = {"4177431", 2, ""};
    inventario[3] = {"4121715", 88, ""};
    inventario[4] = {"4184159", 10, ""};
    inventario[5] = {"4107085", 5, ""};
    inventario[6] = {"4107783", 6, ""};
    inventario[7] = {"4107767", 12, ""};
    inventario[8] = {"4515185", 8, ""};
    inventario[9] = {"4107081", 6, ""};
    inventario[10] = {"4248204", 4, ""};
    inventario[11] = {"4143466", 6, ""};
    inventario[12] = {"4121667", 5, ""};
    inventario[13] = {"4198367", 4, ""};
    inventario[14] = {"4296059", 6, ""};
    inventario[15] = {"4225033", 14, ""};
    inventario[16] = {"4211865", 10, ""};
    inventario[17] = {"4211807", 6, ""};
    inventario[18] = {"4211483", 2, ""};
    inventario[19] = {"4211889", 8, ""};
    inventario[20] = {"4211629", 4, ""};
    inventario[21] = {"4211880", 1, ""};
    inventario[22] = {"4211775", 8, ""};
    inventario[23] = {"4211779", 16, ""};
    inventario[24] = {"4552348", 2, ""};
    inventario[25] = {"4211622", 11, ""};
    inventario[26] = {"4211573", 9, ""};
    inventario[27] = {"4211375", 2, ""};
    inventario[28] = {"4544140", 2, ""};
    inventario[29] = {"4281515", 10, ""};
    inventario[30] = {"306901", 1, ""};
    inventario[31] = {"4508664", 4, ""};
    inventario[32] = {"4142865", 9, ""};
    inventario[33] = {"4206482", 24, ""};
    inventario[34] = {"4514553", 52, ""};
    inventario[35] = {"4514554", 6, ""};
    inventario[36] = {"4565452", 1, ""};
    inventario[37] = {"4186017", 4, ""};
    inventario[38] = {"4119589", 3, ""};
    inventario[39] = {"4512360", 4, ""};
    inventario[40] = {"4210759", 2, ""};
    inventario[41] = {"4535768", 2, ""};
    inventario[42] = {"4211639", 8, ""};
    inventario[43] = {"4211805", 4, ""};
    inventario[44] = {"4211815", 19, ""};
    inventario[45] = {"4211086", 4, ""};
    inventario[46] = {"370526", 2, ""};
    inventario[47] = {"370626", 4, ""};
    inventario[48] = {"370826", 1, ""};
    inventario[49] = {"4508553", 2, ""};
    inventario[50] = {"4141300", 4, ""};
    inventario[51] = {"4499858", 4, ""};
    inventario[52] = {"4545430", 3, ""};
    inventario[53] = {"4545434", 3, ""};
    inventario[54] = {"4545435", 3, ""};
    inventario[55] = {"4297031", 3, ""};
    inventario[56] = {"4297210", 4, ""};
    inventario[57] = {"4184286", 4, ""};
    inventario[58] = {"4548553", 3, ""};
    inventario[59] = {"4547402", 2, ""};
    inventario[60] = {"4547403", 2, ""};
    inventario[61] = {"4288099", 1, ""};
    inventario[62] = {"4292468", 2, ""};
    inventario[63] = {"4502834", 2, ""};
    inventario[64] = {"4537417", 10, ""};
    inventario[65] = {"4495932", 20, ""};
    inventario[66] = {"4297202", 14, ""};
    inventario[67] = {"4297200", 6, ""};
    inventario[68] = {"4522939", 10, ""};
    inventario[69] = {"4297197", 2, ""};
    inventario[70] = {"4210751", 10, ""};
    inventario[71] = {"4210667", 13, ""};
    inventario[72] = {"4210753", 14, ""};
    inventario[73] = {"4210668", 2, ""};
    inventario[74] = {"4234240", 4, ""};
    inventario[75] = {"4211668", 6, ""};
    inventario[76] = {"4210638", 4, ""};
    inventario[77] = {"4211651", 18, ""};
    inventario[78] = {"4297006", 3, ""};
    inventario[79] = {"2997174", 1, ""};
    inventario[80] = {"2995029", 2, ""};
    inventario[81] = {"4548642", 1, ""};
    inventario[82] = {"4297187", 1, ""};
    inventario[83] = {"4297188", 4, ""};
    inventario[84] = {"4297185", 2, ""};
    inventario[85] = {"4558295", 1, ""};
}
#endif
