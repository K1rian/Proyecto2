#include <iostream>
#include "ejercito2.h"
#include "reino.h"

using namespace std;

Ejercito ejercito;
Reino kindom;

int main() {
    string nombre_r;
    string nombre_e;
    int unidades;

    cout << "Nombre del Reino:" << endl;
    cin >> nombre_r;
    kindom.setnombre(nombre_r);

    cout << "\n--Reino " << kindom.getnombre() << "--" << "\n" << endl;
    cout << "Nombre del ejercito:" << endl;
    cin >> nombre_e;

    ejercito.setNombre(nombre_e);

    cout << "\n--El ejercito " << ejercito.getNombre() << " tiene ___ unidades--" << endl;

    cout << "Ingrese la cantidad de unidades a reclutar:" << endl;
    cin >> unidades;
    ejercito.reclutarPersonajes(unidades);
    ejercito.mostrarEjercito();

    return 0;
}
