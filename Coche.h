//
// Created by Alumnos on 12/03/2024.
//

#ifndef UNTITLED1_COCHE_H
#define UNTITLED1_COCHE_H


#include <string>

class Coche {
public:
    Coche() noexcept;
    Coche(const Coche &coche);
    Coche(const Coche &&coche);
    Coche(const std::string &brand, const std::string &modelo, int year, int maxSpeed, int mileage);
    ~Coche() = default;


private:
    std::string brand;
    std::string modelo;
    int year;
    int maxSpeed;
    int mileage;
};

#endif //UNTITLED1_COCHE_H
