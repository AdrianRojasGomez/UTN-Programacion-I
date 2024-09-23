#include <iostream>
using namespace std;

/*Hacer un programa para ingresar un número entero y luego informar todos los divisores pares de ese número.
Ejemplo A. Si se ingresa 6 se listará: 2 y 6. Ejemplo B. Si se ingresa 8 se listará: 2, 4 y 8. Ejemplo C. Si se ingresa 11 no se listará nada.
*/


int main()
{

    int n;

    cout << "Ingrese el numero que desee saber sus divisores pares" << endl;
    cin >> n;

    cout << "Los divisores pares de este numero son: " << endl;

         for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i % 2 == 0)
            cout << i << "." << endl;
    }


    return 0;
}
