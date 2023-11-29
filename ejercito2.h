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
    static const int maxUnidades = 20;  // Número máximo de unidades en el ejército.
    Datos_Unidad personajes[maxUnidades];  // Arreglo de unidades en el ejército.
    int cantidadUnidades = 0;  // Número actual de unidades en el ejército.
    random_device rd;
    mt19937 generador{ rd() };
    uniform_int_distribution<int> distribucion{ 1, 100 };
    string nombre;  // Nombre del ejército.
    int contgeneral;  // Contador para garantizar al menos un General en el ejército.

public:
    // Constructor que agrega al menos un General al ejército al ser creado.
    Ejercito() {
        personajes[cantidadUnidades++] = General();
        contgeneral = 1;
    }

    // Función para reclutar personajes al ejército.
    void reclutarPersonajes(int cantidad) {
        // Asegura que haya al menos un General en el ejército.
        if (contgeneral != 1) {
            personajes[cantidadUnidades++] = General();
            contgeneral = 1;
        }

        cantidad = cantidad - 1;

        while (cantidadUnidades < maxUnidades && cantidad > 0) {
            int numAleatorio = distribucion(generador);
            if (numAleatorio % 2 == 0) {
                Heroe heroe;
                heroe.heru();  // Establece nombre, vida y experiencia.
                personajes[cantidadUnidades++] = heroe;
            }
            else {
                Soldado soldado;
                soldado.soldadu();  // Establece nombre, vida y experiencia.
                personajes[cantidadUnidades++] = soldado;
            }
            --cantidad;
        }
    }

    // Función para mostrar información sobre el ejército.
    void mostrarEjercito() const {
        cout << "Ejercito: " << nombre << endl;
        for (int i = 0; i < cantidadUnidades; ++i) {
            personajes[i].imprime();
        }
    }

    // Funciones para establecer y obtener el nombre del ejército.
    void setNombre(string nuevoNombre) {
        nombre = nuevoNombre;
    }

    string getNombre() const {
        return nombre;
    }
};

#endif // EJERCITO2_H
