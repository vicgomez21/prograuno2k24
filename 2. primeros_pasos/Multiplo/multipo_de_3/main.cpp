#include <iostream>

using namespace std;

int main()
{
    //Programa que calcula los multiplos de 3
    int i;
    for (i=1; i<=20; i++)
    {
        cout << i;
        if (i % 3 == 0)
            cout << " es multiplo de 3";
        else
            cout << " no es multiplo de 3";
        cout << endl;
    }
    return 0;
}
