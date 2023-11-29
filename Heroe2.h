#ifndef HEROE2_H
#define HEROE2_H

#include <iostream>
#include <random>
#include "datos_unidad2.h"

class Heroe : public Datos_Unidad {
private:
    std::random_device rd;
    std::mt19937 generador{ rd() };
    std::uniform_int_distribution<int> distribucion{ 1, 100 };

    int numAl1 = distribucion(generador);  // N�meros aleatorios para inicializar propiedades.
    int numAl2 = distribucion(generador);
    int numAl3 = distribucion(generador);

public:
    // Funci�n miembro para establecer nombre, vida y experiencia espec�ficos para el H�roe.
    void heru() {
        setNombre("Heroe");
        setExperiencia(numAl1);
        setVida(numAl2);
    }
};

#endif // HEROE2_H
