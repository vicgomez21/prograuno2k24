#include <iostream>
#include "Persona.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Persona miPersona(10,20,30,40,50);
    miPersona.despliegaVidas(1000);
    cout << "DPI: " << miPersona.getDpi() << " NOMBRE: " << miPersona.getNombre() << endl;
    return 0;
}
