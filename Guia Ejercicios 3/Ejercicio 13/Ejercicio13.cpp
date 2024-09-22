#include <iostream>
using namespace std;

/*Dada una lista de 10 números enteros informar cual es el máximo de los pares.
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa máximo: 36
Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa máximo: 4
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa máximo: -8
*/

int main()
{

    int valor;
    int maximoPar;
    bool primerValor = true;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Ingrese el " << i << " valor de 10 para mostrar el maximo de los pares" << endl;
        cin >> valor;
        if (valor %2 == 0)
        {
            if (primerValor)
            {
                maximoPar = valor;
                primerValor = false;
            }
            else if (valor > maximoPar)
                maximoPar = valor;
        }

    }

    cout << "El maximo par es el " << maximoPar << " ." << endl;




    return 0;
}
