#include "Coche.h"

Coche::Coches() noexcept
        : brand("Unknown"), modelo("Unknown"), year(0), maxSpeed(0), mileage(0) {
}

Coche::Coches(const Coche &coche) {
    brand = coche.brand;
    modelo = coche.modelo;
    year = coche.year;
    maxSpeed = coche.maxSpeed;
    mileage = coche.mileage;
}


Coche::Coches(const std::string &brand, const std::string &modelo, int year, int maxSpeed, int mileage)
        : brand(brand), modelo(modelo), year(year), maxSpeed(maxSpeed), mileage(mileage) {}
