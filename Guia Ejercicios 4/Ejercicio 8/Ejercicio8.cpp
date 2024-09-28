#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo y la posici�n del m�ximo en la lista. En caso de �empates� considerar la primera aparici�n.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35 Posici�n 7. Ejemplo B: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listar� M�ximo 55 Posici�n 7.
Ejemplo C: -9, -10, -20, -3, -9, -13, -55, -18, -55, 0. Se listar� M�ximo -3 Posici�n 4.

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

