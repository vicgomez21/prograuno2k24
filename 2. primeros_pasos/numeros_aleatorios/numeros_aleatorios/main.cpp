#include <iostream>
#include <cstdlib>

using namespace std;
//Definiciòn de Constantes, es decir, no puede ser cambiado su valor
#define MAXIMA_CALIFICACION 100
#define MINIMA_CALIFICACION 0

int main()
{
    //Inicializaciòn de Variables
    int minimo = MINIMA_CALIFICACION;
    int maximo = MAXIMA_CALIFICACION;
    float aleatorio = 0;

    //aleatorio = minimo + rand()/(RAND_MAX%(maximo-minimo+1)-1);
    aleatorio = minimo + rand()%((maximo+1)-minimo);
    //aleatorio = rand();
    //cout << "funcion rand()" << rand() << endl;
    //cout << "Constante RAND_MAX: " << RAND_MAX << endl;
    //cout << "maximo-minimo+1: " << maximo+1-minimo << endl;
    cout << "Nùmero Aleatorio calculado:  " << aleatorio << endl;
    return 0;
}
