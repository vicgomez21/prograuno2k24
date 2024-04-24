#include <iostream>
#include <string>

using namespace std;
int duplicar (int a)   //Funcion que recibe parametro por Valor
{
    a *= 2;
    return a;
}
void duplicarPorPunteros (int* a)
{
    *a *= 2;
}

int main()
{
    int a = 5;
    int b = 0;
    cout << "El valor de la variable A antes de la funcion por valor es:" << a << endl;
    b = duplicar(a);
    cout << "El valor de la variable A despues de la funcion por valor es: " << a << endl;
    cout << "El valor de la variable B despues de la funcion es: " << b << endl;
    cout << "El valor de la variable A antes de la funcion por referencia (punteros) es:" << a << endl;
    duplicarPorPunteros(&a);
    cout << "El valor de la variable A despues de la funcion por referencia (punteros) es: " << a << endl;
    return 0;
}
