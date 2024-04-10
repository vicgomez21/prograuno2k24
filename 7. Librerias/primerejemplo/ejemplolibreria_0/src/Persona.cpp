#include "Persona.h"
#include <iostream>

using namespace std;

Persona::Persona()
{
    //ctor
}
Persona::Persona(int dpi, int nombre, int apellido, int telefono, int correo)
{
        this->dpi=dpi;
        this->nombre=nombre;
        this->apellido=apellido;
        this->telefono=telefono;
        this->correo=correo;
}
void Persona::despliegaVidas(int vidas)
{
    cout << "Numero de Vidas: " << vidas << endl;
}
int Persona::getDpi()
{
    return this->dpi;
}
int Persona::getNombre()
{
    return this->nombre;
}
int Persona::getApellido()
{
    return this->apellido;
}
int Persona::getTelefono()
{
    return this->telefono;
}
int Persona::getCorreo()
{
    return this->correo;
}
