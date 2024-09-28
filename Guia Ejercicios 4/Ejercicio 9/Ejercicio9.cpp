#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo de los pares.

Ejemplo A: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listará Máximo 36.
Ejemplo B: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listará Máximo 4.
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listará Máximo -8.
*/

int main()
{

    int valor = -1, mayorPar = 0;
    bool primerValor = true;

    while (valor != 0)
    {
        cout << "Ingrese un valor, se listara el maximo de los pares" << endl;
        cin >> valor;

        if(valor % 2 == 0 && valor != 0)
        {
            if (primerValor)
            {
                primerValor = false;
                mayorPar = valor;
            }
            else if (valor > mayorPar)
                mayorPar = valor;
        }

    }

    cout << "El mayor par es " << mayorPar;

        return 0;
}
