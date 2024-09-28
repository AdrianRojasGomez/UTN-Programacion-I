#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo y el mínimo.

Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0.
Se listará Máximo 42 Mínimo -15.

Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0.
Se listará Máximo 42 Mínimo 5.

Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0.
Se listará Máximo -5 Mínimo -42.

Observe que los ejemplos B y C dejan en claro que la suposición de que el máximo “seguramente” es un positivo y el mínimo “seguramente” es un negativo, es incorrecta.
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
