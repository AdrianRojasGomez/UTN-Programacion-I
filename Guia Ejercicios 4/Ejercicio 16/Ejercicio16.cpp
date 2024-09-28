#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresan dos números consecutivos iguales, y luego informar el máximo. Cuando se ingresa el número repetido el mismo debe ser descartado.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 22, 22. Se listará Máximo 35.
En este caso, el segundo número 22 no se analiza, solo sirve para finalizar el ingreso.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 33, 33. Se listará Máximo 55.
En este caso, el segundo número 33 no se analiza, solo sirve para finalizar el ingreso.
Ejemplo C: 5, 10, 20, 8, 55, 13, 55, -8, -5,  88, 88. Se listará Máximo 88.
En este caso, el segundo número 88 no se analiza, solo sirve para finalizar el ingreso.
*/

int main()
{

    int valor = -1, ultimoValor = 0, maximo = 0;
    bool primeraVuelta = true, encendido = true;

    cout << "Ingresa el valor, se mostrara el maximo, ingrese el mismo valor 2 veces para salir" << endl;

    while (encendido)
    {
        cin >> valor;

        if (primeraVuelta)
        {
            primeraVuelta = false;
            maximo = valor;
            ultimoValor = valor;
        }
        else if (ultimoValor != valor)
        {
            if (valor > maximo)
            {
                maximo = valor;
            }
                ultimoValor = valor;
        }
            else
                encendido = false;
    }

    cout << "Maximo: " << maximo << endl;
        return 0;
    }
