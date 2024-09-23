#include <iostream>
using namespace std;

/*Dada una lista de 10 números enteros informar la cantidad de duplas de números impares que se hayan ingresado consecutivamente.
Ejemplo A: 12, 3, 5, 7, 6, 9, 13, 10, 7, -5.

En esta lista las duplas son: 3:5, 5:7, 9:13, 7:-5 por lo tanto se informará que hay 4 duplas de números impares ingresados consecutivamente.
*/

int main()
{

    bool primerImpar = true;
    int contadorImpar = 0, duplas = 0;
    int valor;

    cout << "Ingrese 10 numeros para ver cuantas duplass impares tiene" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> valor;
        if (valor % 2 != 0 && primerImpar)
        {
            contadorImpar +=1;
            primerImpar = !primerImpar;
        }
        else
        {
            if (valor % 2 != 0 && !primerImpar)
                contadorImpar+=1;
            else
                contadorImpar = 0;
        }

        if (contadorImpar == 2)
        {
            duplas +=1;
            contadorImpar -=1;
        }



    }

    cout << "Hay " << duplas << " duplas de numeros impares en la lista " << endl;



    return 0;
}
