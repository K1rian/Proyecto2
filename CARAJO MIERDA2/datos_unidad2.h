// datos_unidad2.h

#ifndef DATOS_UNIDAD2_H
#define DATOS_UNIDAD2_H

#include <iostream>
#include <string>

class Datos_Unidad {
private:
    std::string nombre;
    int vida;
    int experiencia;

public:
    Datos_Unidad() : nombre("Sin Nombre"), vida(100), experiencia(0) {}

    Datos_Unidad(std::string nom, int vid, int exp)
        : nombre(nom), vida(vid), experiencia(exp) {}

    std::string getNombre() const {
        return nombre;
    }

    int getVida() const {
        return vida;
    }

    int getExperiencia() const {
        return experiencia;
    }

    void setNombre(std::string nom) {
        nombre = nom;
    }

    void setVida(int vid) {
        vida = vid;
    }

    void setExperiencia(int exp) {
        experiencia = exp;
    }

    void imprime() const {
        std::cout << nombre << " Nivel de Experiencia: " << experiencia << ", Nivel de Vida: " << vida << std::endl;
    }
};

#endif // DATOS_UNIDAD2_H
