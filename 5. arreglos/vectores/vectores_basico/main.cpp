#include <iostream>

using namespace std;
//Declaraciòn de Prototipos de Funciòn
void LlamarCiclo();
void LlenarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1]);
//Declaraciòn de Constantes
#define NUMEROALUMNOS 5
#define NUMEROMATERIAS 5
#define NUMERONOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAX_LONGITUD_CADENA 100

int main()
{
    LlamarCiclo();
    return 0;
}
void LlamarCiclo()
{
    float matrizFacultad_1[NUMEROALUMNOS][NUMERONOTAS+1];
    float matrizFacultad_2[NUMEROALUMNOS][NUMERONOTAS+1];
    float matrizFacultad_3[NUMEROALUMNOS][NUMERONOTAS+1];

    char opcion;
    bool repetir=true;

    float promedioFacultad_1;
    float promedioFacultad_2;
    float promedioFacultad_3;

    char alumnosFacultad[NUMEROALUMNOS][MAX_LONGITUD_CADENA]={"Carlos", "Luis", "Maria", "Pedro", "Mario"};

    do
    {
        promedioFacultad_1=0;
        promedioFacultad_2=0;
        promedioFacultad_3=0;
        cout << "*** Comparativo de Facultades ***" << endl << endl;
        LlenarMatriz(matrizFacultad_1);

    } While (repetir)

}
void LlenarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1])
{
    int y,z;
    for(y=0; y < NUMEROALUMNOS; y++)
    {
        float suma=0;
        int calificacionAlumno=0;
        for(z=0; z<NUMERONOTAS; z++)
        {

        }
    }
}
