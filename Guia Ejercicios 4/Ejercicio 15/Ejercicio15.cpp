#include <iostream>
using namespace std;
/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, informar los 2 mayores valores ingresados, aclarando cual es el máximo y cuál el que le sigue.
Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4
*/

int main()
{
    int valor = -1, mayor = 0, segundoMayor = 0;
    bool primeraVuelta = true, segundaVuelta = true;


    cout << "Ingrese valores para ver los 2 mayores Valores, 0 para salir" << endl;

    while (valor != 0)
    {
        cin >> valor;

        if (valor != 0)
        {
            if(primeraVuelta)
            {
                primeraVuelta = false;
                mayor = valor;
            }
            else if (segundaVuelta)
            {
                if(valor > mayor)
                {
                    segundaVuelta = false;
                    segundoMayor = mayor;
                    mayor = valor;
                }
                else
                {
                    segundaVuelta = false;
                    segundoMayor = valor;
                }
            }
            else if (valor > mayor)
            {
                segundoMayor = mayor;
                mayor = valor;
            }
            else if (valor > segundoMayor)
            {
                segundoMayor = valor;
            }
        }
    }

    cout << "Mayor " << mayor << endl;
    cout << "Segundo Mayor " << segundoMayor << endl;
    return 0;
}
