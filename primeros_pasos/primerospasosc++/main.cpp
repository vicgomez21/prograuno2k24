#include <iostream>

using namespace std;
//Este programa tiene como objetivo mostrar los diferentes tipos de variables en c++

int main()
{
    // Definici�n de variables enteras
    int dia;
    int mes;
    int anio=1999;
    // Inicializaci�n de variables
    dia = 3;
    mes = 2;

    // Despliegue de los valores de las variables
    cout << "Naci el: \n";
    cout << "dia: " << dia << endl;
    cout << "mes: " << mes << endl;
    cout << "a�o: " << anio << endl;
    // Definici�n de variables boolean

    bool estoy_habriento = true;
    cout << "Que nivel de hambre tienes? " << estoy_habriento << "\n";

    return 0;
}
