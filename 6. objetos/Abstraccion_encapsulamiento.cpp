#include <iostream>
using namespace std;

class Persona {
public:
    int edad;
    Persona(int pEdad) {
        edad=pEdad;
    }
    void pensamiento()
    {
        cout << obtenerPensamiento() << endl;
    }
private:
    int nivelSocial;
    int nivelInteligencia;
    int nivelSuerte;
    string obtenerPensamiento()
    {
        nivelSocial=0;
        nivelInteligencia=0;
        nivelSuerte=0;
        if (nivelSocial + nivelSuerte > 100)
        {
            return "Estoy pensando algo muy bueno y me causa felicidad";
        }
        else if (nivelSuerte > nivelInteligencia)
        {
            return "Tengo mucha suerte";

        }
        else if (edad > 18)
        {
            return "Soy un adulto";
        }
        else
        {
            return "no estoy pensando nada";
        }
    }
};
int main()
{
    Persona Roberto(10);
    Roberto.pensamiento();
    return 0;
}
