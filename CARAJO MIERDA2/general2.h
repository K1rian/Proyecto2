// general2.h

#ifndef GENERAL2_H
#define GENERAL2_H

#include <iostream>
#include <random>
#include "datos_unidad2.h"

class General : public Datos_Unidad {
private:
    int cont_general = 1;
    int cont_moral;

    std::random_device rd;
    std::mt19937 generador{ rd() };
    std::uniform_int_distribution<int> distribucion{ 1, 100 };

public:
    General() {
        generalu();  // Establece nombre, vida y experiencia específicos para el General
    }

    void generalu() {
        setNombre("General");
        setExperiencia(distribucion(generador));
        setVida(distribucion(generador));
    }

    int getContGeneral() const {
        return cont_general;
    }
};

#endif // GENERAL2_H
