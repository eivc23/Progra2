#include <iostream>
#include "Coche.h"



int main() {
    Coche coche_default;

    Coche coche_parametros("Toyota", "Corolla", 2020, 180, 25000);

    Coche coche_copia(coche_parametros);

    return 0;
}