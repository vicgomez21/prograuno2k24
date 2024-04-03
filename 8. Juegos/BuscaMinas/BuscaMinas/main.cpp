#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    const int FILAS_TABLERO = 5;
    const int COLUMNAS_TABLERO = 5;
    const int MINAS_EN_TABLERO = 3;
    const int VIDAS_JUGADOR = 3;
    const bool MODO_DESARROLLADOR = false;

    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\tJuego BUSCAMINAS -Menu-" << endl;
        cout << "\t\t--------------------------" << endl;
        cout << "\t1. Configuracion" << endl;
        cout << "\t2. Iniciar Juego" << endl;
        cout << "\t3. Salir" << endl;
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                break;
        case 2:
                break;
        case 3:
                repetir=false;
                break;
        }
    } while(repetir);
    cout << "Hello world!" << endl;
    return 0;
}
