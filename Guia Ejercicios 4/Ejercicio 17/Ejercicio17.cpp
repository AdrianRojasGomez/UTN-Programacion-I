#include <iostream>
using namespace std;
/*
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresan dos n�meros positivos consecutivos, y luego informar el m�ximo. Cuando se ingresa el segundo n�mero positivo consecutivo el mismo debe ser descartado.

Ejemplo A: 5, -10, 20, -8, 0, 13, -35, -8, 15, 10. Se listar� M�ximo 20.
En este caso, el segundo n�mero positivo consecutivo, el 10, no se analiza, s�lo sirve para finalizar el ingreso.
Ejemplo B: 5, -10, 20, -20, 0, 55, -13, 45, -8, -5, 12, 120. Se listar� M�ximo 55.
En este caso, el segundo n�mero positivo consecutivo, el 120, no se analiza, s�lo sirve para finalizar el ingreso.
*/

int main()
{

    int valor = 0, maximo = 0, ultimoValor = 0;
    bool primeraVuelta = true, encendido = true;

    cout << "Ingrese numeros para mostrar el maximo, Ingrese dos numeros positivos seguidos" << endl;

    while (encendido)
    {
        cin >> valor;

        if (!(valor > 0 && ultimoValor > 0))
        {
            if (primeraVuelta)
            {
                primeraVuelta = false;
                maximo = valor;
                ultimoValor = valor;
            }
            else if (valor > maximo)
            {
                maximo = valor;
                ultimoValor = valor;
            }
            else
            {
                ultimoValor = valor;
            }
        }
        else
            encendido = false;

    }

    cout << "El mayor fue: " << maximo << endl;

    return 0;
}
