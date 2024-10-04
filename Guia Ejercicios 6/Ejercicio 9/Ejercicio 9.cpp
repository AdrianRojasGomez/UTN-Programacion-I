#include <iostream>
using namespace std;

/*Escribir una función que reciba un número y retorne 1 si el número recibido es perfecto y 0 si no es perfecto.
Hacer un programa para que, dada una lista de números que finaliza con cero, informe cuántos de ellos eran perfectos. Utilizar la función solicitada.
*/


int EsPerfecto (int numero)
{
    int contadorPerfecto = 0;

    for (int i = 1; i < numero; i++)
    {
        if( numero % i == 0)
            contadorPerfecto += i;
    }
    if (numero == contadorPerfecto)
        return 1;
    else
        return 0;
}

void IngresoLista()
{
    int ingreso = -1, totalPerfectos = 0;

    cout << "Ingrese numeros para contar cuantos de ellos son perfectos, 0 para cerrar." << endl;

    do
    {
        cin >> ingreso;
        if (EsPerfecto(ingreso) && ingreso != 0)
        {
            totalPerfectos++;
            cout << "total Perfectos +1: " << totalPerfectos << endl;

        }
    }
    while(ingreso != 0);

    cout << "Hubo " << totalPerfectos << " numeros perfectos en la lista.";
}

int main()
{
    IngresoLista();
    return 0;
}
