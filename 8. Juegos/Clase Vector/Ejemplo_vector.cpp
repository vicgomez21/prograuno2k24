#include <iostream>
#include <vector>
using namespace std;
int main() // Calcula la edad media de una clase de alumnos
{
  int num_alumnos;
  do
  {
    cout << "Introduzca el número de alumnos: ";
    cin >> num_alumnos;
    if (num_alumnos < 1)
      cout << "\n\nERROR: el número de alumnos debe ser positivo.\n\n";
  }while (num_alumnos < 1);
  vector<int> edad;
  for (int i = 0; i < num_alumnos; ++i)
  {
    int valor;
    cout << "\nIntroduce la edad del alumno " << i+1 << ": ";
    cin >> valor;
    edad.push_back(valor);
  }
  double media = 0.;
  for (size_t i = 0; i < edad.size(); ++i)
    media += edad[i];
  media /= num_alumnos;
  cout << "La edad media es " << media << endl;
}
