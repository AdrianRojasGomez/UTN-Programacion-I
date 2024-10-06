#include <iostream>
using namespace std;
/*Hacer un programa para ingresar 10 números y guardarlos en un vector. Determinar e informar cuál es la suma de los valores del vector.*/

int main()
{

    const int tamanoLista = 10;
    int suma = 0;
    int listaNumeros[tamanoLista] = {};

    for (int i = 0; i < tamanoLista; i++)
    {
        cout << "Ingresa un valor a la lista" <<endl;
        cin >> listaNumeros[i];
    }

    for (int i = 0; i < tamanoLista; i++)
    {
        suma += listaNumeros[i];
    }

    cout<<  "La suma de todos los valores de la lista es de " << suma << endl;

    return 0;
}
