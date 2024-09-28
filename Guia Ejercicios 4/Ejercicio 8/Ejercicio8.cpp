#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo y la posición del máximo en la lista. En caso de “empates” considerar la primera aparición.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35 Posición 7. Ejemplo B: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listará Máximo 55 Posición 7.
Ejemplo C: -9, -10, -20, -3, -9, -13, -55, -18, -55, 0. Se listará Máximo -3 Posición 4.

*/


int main()
{

    int value = -1, mayor = 0, posicion = 0, posicionMayor = 0;
    bool primeraVez = true;

    while (value != 0)
    {
        cout << "Ingrese un valor, ingrese 0 para salir" <<endl;
        cin >> value;
        posicion++;

        if (primeraVez)
        {
            primeraVez = false;
            mayor = value;
            posicionMayor = posicion;
        }

        if (value >= mayor && value != 0)
        {
            if (value != mayor)
            {
                mayor = value;
                posicionMayor = posicion;
            }
        }
    }

    cout << "El numero mayor es el " << mayor << endl;
    cout << "Su posicion es la " << posicionMayor << endl;
return 0;
}


