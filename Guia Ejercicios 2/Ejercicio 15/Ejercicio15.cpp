#include <iostream>
using namespace std;

int main()
{

    int AnoBisiesto;
    bool isBisiesto;

    cout << "Ingresa el ano para calcular si es bisiesto" << endl;
    cin >> AnoBisiesto;

    if  (AnoBisiesto % 4 == 0)
    {
        if  (AnoBisiesto %100 == 0)
        {
            if  (AnoBisiesto % 400 == 0)
                isBisiesto = true;
            else
                isBisiesto = false;
        }
        else
            isBisiesto = true;

    }
    else
        isBisiesto = false;


    if  (isBisiesto)
        cout << "El año " << AnoBisiesto << " es bisiesto." << endl;
    else
        cout << "El año " << AnoBisiesto << " no es bisiesto. " << endl;

    return 0;
}
