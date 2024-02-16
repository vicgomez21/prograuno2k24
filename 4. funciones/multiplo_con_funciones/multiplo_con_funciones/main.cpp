#include <iostream>

using namespace std;
//Prototipo de Funciones
bool MultiploDeTres(int n);

int main()
{
    //Programa que calcula los multiplos de 3 con funciones
    int i=1;
    while (i<= 20)
    {
        cout << i;
        if (MultiploDeTres(i)) //Llamada a la funcion MultiploDeTres()
            cout << " es multiplo de 3";
        else
            cout << " no es multiplo de 3";
        cout << endl;
        i++;
    }
    return 0;
}
//Implementaciòn de las funciones
bool MultiploDeTres(int n)
{
    if (n%3) return false;
    else return true;
}
