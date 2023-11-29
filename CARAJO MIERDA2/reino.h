// reino.h

#ifndef REINO_H
#define REINO_H

#include <iostream>

using namespace std;

class Reino {
private:
    string nombre;

public:
    string getnombre() {
        return nombre;
    }

    void setnombre(string nuvo) {
        nombre = nuvo;
    }
};

#endif // REINO_H
