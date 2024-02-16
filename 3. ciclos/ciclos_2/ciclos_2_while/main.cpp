#include <iostream>

using namespace std;

int main()
{
    int i=1;
    while (i<=20)  //ciclo hasta que i sea igual a 20
    {
        cout << i;
        if (i%3 == 0)
        {
            cout << " es mùltiplo de 3 ";
        }
        else
            cout << " no es mùltiplo de 3 ";
        cout << endl;
        i++;
    }
    return 0;
}
