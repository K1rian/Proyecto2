// ejercito2.h

#ifndef EJERCITO2_H
#define EJERCITO2_H

#include <iostream>
#include <random>
#include "general2.h"
#include "Heroe2.h"
#include "soldado2.h"
#include "datos_unidad2.h"

using namespace std;

class Ejercito {
private:
    static const int maxUnidades = 20;
    Datos_Unidad personajes[maxUnidades];
    int cantidadUnidades = 0;
    random_device rd;
    mt19937 generador{ rd() };
    uniform_int_distribution<int> distribucion{ 1, 100 };
    string nombre;
    int contgeneral;

public:
    Ejercito() {
        // Agrega al menos un general al ejército
        personajes[cantidadUnidades++] = General();
    }

    void reclutarPersonajes(int cantidad) {
        if (contgeneral = !1) {
            personajes[cantidadUnidades++] = General();
            contgeneral = 1;
        }
        // Asegúrate de no superar el límite máximo de unidades y reclutar al menos un General
        cantidad = cantidad - 1;

        while (cantidadUnidades < maxUnidades && cantidad > 0) {
            int numAleatorio = distribucion(generador);
            if (numAleatorio % 2 == 0) {
                Heroe heroe;
                heroe.heru();  // Establece nombre, vida y experiencia
                personajes[cantidadUnidades++] = heroe;
            }
            else {
                Soldado soldado;
                soldado.soldadu();  // Establece nombre, vida y experiencia
                personajes[cantidadUnidades++] = soldado;
            }
            --cantidad;
        }
    }

    void mostrarEjercito() const {
        cout << "Ejercito: " << nombre << endl;
        for (int i = 0; i < cantidadUnidades; ++i) {
            personajes[i].imprime();
        }
    }

    void setNombre(string nuevoNombre) {
        nombre = nuevoNombre;
    }

    string getNombre() const {
        return nombre;
    }
};

#endif // EJERCITO2_H
