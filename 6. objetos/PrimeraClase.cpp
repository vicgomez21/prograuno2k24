#include <iostream>
using namespace std;

class Gato {
public:
    string nombre;
    Gato() {
        nombre="Felix";
    }
    Gato(string pNombre) {
        nombre = pNombre;
    }
    void Expresarse() {
        cout << nombre << " dice MEOW" << endl;
    }
};
int main() {
    Gato miPrimerGato("Mona");
    cout << "Mi primer objeto Gato se llama: " << miPrimerGato.nombre << endl;
    Gato miSegundoGato;
    cout << "Mi segundo objeto Gato se llama: " << miSegundoGato.nombre << endl;
    Gato miTercerGato("Garfield");
    cout << "Mi tercer objeto Gato se llama: " << miTercerGato.nombre << endl;
    miPrimerGato.Expresarse();
    miSegundoGato.Expresarse();
    miTercerGato.Expresarse();
    return 0;
}
