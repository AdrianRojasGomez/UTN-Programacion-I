#include <iostream>
using namespace std;
/*14
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, informar si todos están ordenados en forma creciente. En caso de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado” Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No Ordenado”
*/

int main()
{

    int valor = -1, ultimoValor = 0;
    bool primeraVuelta = true, ordenado = true;

    cout << "Ingrese numeros para ver si estan ordenados, Termine con 0" << endl;

    while (valor != 0)
    {
        cin >> valor;
        if (valor != 0)
        {
            if (primeraVuelta)
            {
                primeraVuelta = false;
                ultimoValor = valor;
            }
            else if( ultimoValor > valor)
            {
                ordenado = false;
            }

            ultimoValor = valor;
        }
    }

    if (!ordenado)
        cout << "Conjunto no Ordenado";
    else
        cout << "Conjunto Ordenado";


    return 0;
}
