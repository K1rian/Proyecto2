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
    static const int maxUnidades = 20;  // N�mero m�ximo de unidades en el ej�rcito.
    Datos_Unidad personajes[maxUnidades];  // Arreglo de unidades en el ej�rcito.
    int cantidadUnidades = 0;  // N�mero actual de unidades en el ej�rcito.
    random_device rd;
    mt19937 generador{ rd() };
    uniform_int_distribution<int> distribucion{ 1, 100 };
    string nombre;  // Nombre del ej�rcito.
    int contgeneral;  // Contador para garantizar al menos un General en el ej�rcito.

public:
    // Constructor que agrega al menos un General al ej�rcito al ser creado.
    Ejercito() {
        personajes[cantidadUnidades++] = General();
        contgeneral = 1;
    }

    // Funci�n para reclutar personajes al ej�rcito.
    void reclutarPersonajes(int cantidad) {
        // Asegura que haya al menos un General en el ej�rcito.
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

    // Funci�n para mostrar informaci�n sobre el ej�rcito.
    void mostrarEjercito() const {
        cout << "Ejercito: " << nombre << endl;
        for (int i = 0; i < cantidadUnidades; ++i) {
            personajes[i].imprime();
        }
    }

    // Funciones para establecer y obtener el nombre del ej�rcito.
    void setNombre(string nuevoNombre) {
        nombre = nuevoNombre;
    }

    string getNombre() const {
        return nombre;
    }
};

#endif // EJERCITO2_H
