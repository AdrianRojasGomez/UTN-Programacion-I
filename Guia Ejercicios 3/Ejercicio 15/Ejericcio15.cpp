#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de 8 números y luego informar si todos están ordenados en forma creciente. En caso de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado” Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado” Ejemplo C: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado”
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 17.
*/

int main()
{

    int valor, ultimoValor;
    const int TAMANOLISTA = 8;
    bool primerValor = true;
    int contadorOrdenado = 0;

    for (int i = 0; i < TAMANOLISTA; i++)
    {
        cout << "Ingrese un valor" << endl;
        cin >> valor;

        if(primerValor)
        {
            ultimoValor = valor;
            primerValor = false;
            contadorOrdenado++;
        }
        else
        {
            if (valor >= primerValor)
                contadorOrdenado++;
        }
    }

    if (contadorOrdenado == TAMANOLISTA)
        cout << "Conjunto Ordenado";
    else
        cout << "Conjunto no Ordenado";



    return 0;
}
