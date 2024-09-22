#include <iostream>
using namespace std;

/*Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos
Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará:  Cantidad de Positivos: 4
Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará: Cantidad de Positivos: 0
*/

int main()
{
    int valor = 0;
    int tamano = 0;
    int contadorPositivo = 0;

    cout << "Ingrese el tamaño de la lista" << endl;
    cin >> tamano;
    cout << "Ingrese los valores de la lista" << endl;

    for (int i = 0; i < tamano; i++)
    {
        cin >> valor;
        if (valor > 0)
            contadorPositivo++;
    }

    cout << "Cantidad de valores positivos: " << contadorPositivo << endl;

    return 0;
}
