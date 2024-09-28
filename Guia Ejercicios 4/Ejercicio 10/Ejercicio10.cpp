#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo y el m�nimo.

Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0.
Se listar� M�ximo 42 M�nimo -15.

Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0.
Se listar� M�ximo 42 M�nimo 5.

Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0.
Se listar� M�ximo -5 M�nimo -42.

Observe que los ejemplos B y C dejan en claro que la suposici�n de que el m�ximo �seguramente� es un positivo y el m�nimo �seguramente� es un negativo, es incorrecta.
*/

int main()
{

    int valor = -1, maximo = 0, minimo = 0;
    bool primerValor = true;

    cout << "Ingrese un Valor, se informara el maximo y el minimo, termine con 0" << endl;
    while (valor != 0)
    {
        cin >> valor;

        if (valor !=0)
        {
            if(primerValor)
            {
                primerValor = false;
                maximo = valor;
                minimo = valor;
            }
            else if (valor > maximo)
                maximo = valor;
            else if (valor < minimo)
                minimo = valor;
        }
    }

    cout << "El mayor es: " << maximo << endl;
    cout << "El menor es: " << minimo << endl;

    return 0;
}