#ifndef REINO_H
#define REINO_H

#include <iostream>

using namespace std;

class Reino {
private:
    string nombre;  // Variable privada que almacena el nombre del reino.

public:
    string getnombre() {
        return nombre;  // Funci�n miembro para obtener el nombre del reino.
    }

    void setnombre(string nuvo) {
        nombre = nuvo;  // Funci�n miembro para establecer el nombre del reino.
    }
};

#endif // REINO_H
