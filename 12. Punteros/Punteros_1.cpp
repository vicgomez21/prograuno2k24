#include <iostream>
#include <string>

using namespace std;

int main()
{
    string comida = "Pizza";
    string nombre = "Carlos";
    string* ptr = &comida;
    string* ptr2 = &nombre;

    cout << "La primera variable contiene: " << comida << " La segunda variable contiene: " << nombre << endl;
    cout << "La direccion de memoria de la primera variable contiene: " << &comida << " La direccion de memoria de la segunda variable contiene: " << &nombre << endl;
    cout << "El apuntador a la primera variable contiene: " << ptr << " El apuntador a la segunda variable contiene: " << ptr2 << endl;
    cout << "El contenido hacia donde apunta el apuntador a la primera variable es: " << *ptr << "El contenido hacia donde apunta el apuntador a la segunda variable es: " << *ptr2 << endl;
    cout << "La direccion del apuntador a la primera varible es: " << &ptr << "La direccion del apuntador a la segunda variable es: " << &ptr2 << endl;
    return 0;
}
