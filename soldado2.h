#ifndef SOLDADO2_H
#define SOLDADO2_H

#include <iostream>
#include <random>

#include "datos_unidad2.h"

class Soldado : public Datos_Unidad {
private:
     
    std::random_device rd;
    std::mt19937 generador{ rd() };
    std::uniform_int_distribution<int> distribucion{ 1, 100 };

    int numAl1 = distribucion(generador);  // Números aleatorios para inicializar propiedades.
    int numAl2 = distribucion(generador);
    int numAl3 = distribucion(generador);

public:
    void soldadu() {
        setNombre("Soldado");     // Inicializar el nombre como "Soldado".
        setExperiencia(numAl1);   // Inicializar experiencia con numAl1.
        setVida(numAl2);          // Inicializar vida con numAl2.
    }
};

#endif // SOLDADO2_H
