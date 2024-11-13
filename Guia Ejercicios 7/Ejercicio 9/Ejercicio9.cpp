#include <iostream>
using namespace std;

/*
Dada una lista de 20 n�meros enteros, cargarlos en un vector.
Determinar e informar con un cartel aclaratorio si el vector est� ordenado estrictamente en forma creciente.
Por ejemplo: el vector [1, 3, 5, 7, 9] est� ordenado estrictamente. El vector [1,  5,  3,  7] no lo est�.
*/

void AnadirNumeros(int tamanioLista, int listaNumeros[]);
bool ValidarOrden(int tamanioLista, int listaNumeros[]);

int main()
{
    const int TAMANO_LISTA = 20;
    int listaNumeros[TAMANO_LISTA] {};


    AnadirNumeros(TAMANO_LISTA, listaNumeros);
    if (ValidarOrden(TAMANO_LISTA, listaNumeros))
        cout << "Es ordenado";
    else
        cout << "No es ordenado";

    return 0;
}

void AnadirNumeros(int tamanioLista, int listaNumeros[])
{
    int ingreso = 0;
    for (int i = 0; i < tamanioLista; i++)
    {
        cout << "Ingresa el numero "<< i+1 << "de la lista" << endl;
        cin >> ingreso;
        listaNumeros[i] = ingreso;
    }
}

bool ValidarOrden(int tamanioLista, int listaNumeros[] )
{
    bool esOrdenado = true;
    for (int i = 1; i < tamanioLista; i++)
    {
        if (!(listaNumeros[i - 1] <  listaNumeros[i]))
        {
            esOrdenado = false;
            return esOrdenado;
        }
    }

    return esOrdenado;
}
