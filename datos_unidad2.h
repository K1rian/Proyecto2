#ifndef DATOS_UNIDAD2_H
#define DATOS_UNIDAD2_H

#include <iostream>
#include <string>

class Datos_Unidad {
private:
    std::string nombre;       // Variable privada que almacena el nombre de la unidad.
    int vida;                 // Variable privada que almacena el nivel de vida de la unidad.
    int experiencia;          // Variable privada que almacena el nivel de experiencia de la unidad.

public:
    // Constructor predeterminado que inicializa valores por defecto.
    Datos_Unidad() : nombre("Sin Nombre"), vida(100), experiencia(0) {}

    // Constructor parametrizado que permite inicializar con valores específicos.
    Datos_Unidad(std::string nom, int vid, int exp)
        : nombre(nom), vida(vid), experiencia(exp) {}

    // Funciones miembro para obtener los valores de las variables privadas.
    std::string getNombre() const {
        return nombre;
    }

    int getVida() const {
        return vida;
    }

    int getExperiencia() const {
        return experiencia;
    }

    // Funciones miembro para establecer los valores de las variables privadas.
    void setNombre(std::string nom) {
        nombre = nom;
    }

    void setVida(int vid) {
        vida = vid;
    }

    void setExperiencia(int exp) {
        experiencia = exp;
    }

    // Función miembro para imprimir información sobre la unidad.
    void imprime() const {
        std::cout << nombre << " Nivel de Experiencia: " << experiencia << ", Nivel de Vida: " << vida << std::endl;
    }
};

#endif // DATOS_UNIDAD2_H
