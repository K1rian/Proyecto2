// Heroe2.h

#ifndef HEROE2_H
#define HEROE2_H

#include <iostream>
#include <random>
#include "datos_unidad2.h"

class Heroe : public Datos_Unidad {
private:
    int cont_general = 1;
    int cont_moral;

    std::random_device rd;
    std::mt19937 generador{ rd() };
    std::uniform_int_distribution<int> distribucion{ 1, 100 };

    int numAl1 = distribucion(generador);
    int numAl2 = distribucion(generador);
    int numAl3 = distribucion(generador);

public:
    void heru() {
        setNombre("Heroe");
        setExperiencia(numAl1);
        setVida(numAl2);
    }
};

#endif // HEROE2_H
