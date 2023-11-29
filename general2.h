#ifndef GENERAL2_H
#define GENERAL2_H

#include <iostream>
#include <random>

#include "datos_unidad2.h"

class General : public Datos_Unidad {
private:
    int cont_general = 1;  // Contador espec�fico para los generales, inicializado en 1.
    int cont_moral;        // Contador moral, pero no est� inicializado expl�citamente.

    std::random_device rd;
    std::mt19937 generador{ rd() };
    std::uniform_int_distribution<int> distribucion{ 1, 100 };

public:
    // Constructor de la clase General que establece nombre, vida y experiencia espec�ficos.
    General() {
        generalu();
    }

    // Funci�n miembro para establecer nombre, vida y experiencia espec�ficos para el General.
    void generalu() {
        setNombre("General");
        setExperiencia(distribucion(generador));
        setVida(distribucion(generador));
    }

    // Funci�n miembro para obtener el contador espec�fico para los generales.
    int getContGeneral() const {
        return cont_general;
    }
};

#endif // GENERAL2_H
