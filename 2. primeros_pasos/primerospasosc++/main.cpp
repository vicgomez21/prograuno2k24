#include <iostream>

using namespace std;
//Este programa tiene como objetivo mostrar los diferentes tipos de variables en c++
//Rangos diferentes tipos de variables  (plataformas de 64 bits)
// int            4 bytes -2,147,483,648 a 2,147,483,648
// unsigned int   4 bytes 0 a 4,294,967,295
// short          2 bytes -32,768 a 32,767
// unsigned short 2 bytes 0 a 65,535
// float          4 bytes 1.2E-38 a 3.4E+38 6 decimales

int main()
{
    // Definiciòn de variables enteras
    int dia;
    int mes;
    int anio=1999;
    // Inicializaciòn de variables
    dia = 3;
    mes = 2;
    // Despliegue de los valores de las variables
    cout << "Naci el: \n";
    cout << "dia: " << dia << endl;
    cout << "mes: " << mes << endl;
    cout << "año: " << anio << endl;
    // Definiciòn de variables boolean
    bool estoy_habriento = true;
    cout << "Que nivel de hambre tienes? " << estoy_habriento << "\n";
    // Definiciòn de variables flotantes o con decimales
    float pi=3.141516f;
    cout << "Valor de Pi: " << pi << endl;
    // Definiciòn de variables Char
    char primerCaracter = 'h';
    char segundoCaracter = 'o';
    char tercerCaracter = 'l';
    char cuartoCaracter = 'a';
    cout << primerCaracter << segundoCaracter << tercerCaracter << cuartoCaracter << endl;

    return 0;
}
