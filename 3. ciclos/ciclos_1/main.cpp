#include <iostream>

using namespace std;

int main()
{
    //Permite la suma de todos los n�meros pares
    int par = 0;
    //Calculo de n�meros pares con % (m�dulo)
    //for(int i = 2; i<=100; i++)
    //{
    //    if (i%2 == 0)
    //        par += i;
    for (int i = 2; i <= 100; i+=2)
    {
        par+=i;

    }
    cout << "La suma de todos los pares de 2 a 100 es: " << par << endl;
    return 0;
}
