#include <iostream>
using namespace std;

/*Leer 10 números y guardarlos en un vector. Calcular el promedio y luego mostrar por pantalla los valores que son mayores al promedio*/

int main()
{
    const int TAMANOLISTA = 10;
    int listaNumeros[TAMANOLISTA] = {};
    int suma = 0, promedio = 0;

    for (int i = 0; i < TAMANOLISTA; i++)
    {
        cout << "Ingrese un numero a la lista: " << i+1 << "/10" << endl;
        cin >> listaNumeros[i];
    }

    for (int i = 0; i < TAMANOLISTA; i++)
    {
        suma += listaNumeros[i];
    }

    promedio = suma / TAMANOLISTA;

    for (int i = 0; i < TAMANOLISTA; i++)
    {
        if (listaNumeros[i] > promedio)
        {
            cout << listaNumeros[i] << " es mayor que el promedio" << endl;
        }
    }

    return 0;
}
