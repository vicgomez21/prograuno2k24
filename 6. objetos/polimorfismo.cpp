#include <iostream>
using namespace std;
//Este programa permite demostrar el polimorfismo en los objetos
class Animal //Definici�n de la clase Padre
{
public:
    void SonidoAnimal()
    {
        cout << "Los animales hacen sonidos" << endl;
    }
};
//Definici�n de clases hijas o subclases
class Cerdo:public Animal
{
public:
    void SonidoAnimal()
    {
        cout << "El cerdo se expresa asi: Wee Wee" << endl;
    }
};
class Perro:public Animal
{
public:
    void SonidoAnimal()
    {
        cout << "El perro se expresa asi: Guau Guau" << endl;
    }
};
int main()
{
    Animal miAnimal;
    Cerdo miCerdo;
    Perro miPerro;

    miAnimal.SonidoAnimal();
    miCerdo.SonidoAnimal();
    miPerro.SonidoAnimal();
    return 0;
}

