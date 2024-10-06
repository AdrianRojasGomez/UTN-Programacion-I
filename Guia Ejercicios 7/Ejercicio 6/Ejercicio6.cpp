#include <iostream>
using namespace std;
/*Leer 10 números y guardarlos en un vector. Determinar e informar los dos últimos números pares en el vector y sus respectivas posiciones en el mismo. Suponer que habrá al menos dos números pares.*/

int main()
{

    const int TAMANOLISTA = 10;
    int listaNumeros[TAMANOLISTA] = {};

    int valorUltimo = 0, valorPenultimo = 0;
    int posicionUltimo = 0, posicionPenultimo = 0;


    for (int i = 0; i < TAMANOLISTA; i++)
    {
        cout << "Ingrese un numero a la lista: " << i+1 << "/10" << endl;
        cin >> listaNumeros[i];

        if (listaNumeros[i] % 2 == 0 && posicionUltimo == posicionPenultimo)
        {
            valorUltimo = listaNumeros[i];
            posicionUltimo = i+1;
        }
        else if (listaNumeros[i] % 2 == 0)
        {
            valorPenultimo = valorUltimo;
            posicionPenultimo = posicionUltimo;
            valorUltimo = listaNumeros[i];
            posicionUltimo = i+1;
        }
    }

    cout << "El ultimo valor par ingresado fue el " << valorUltimo << " en la posicion " << posicionUltimo << endl;
    cout << "El penultimo valor par ingresado fue el " << valorPenultimo << " en la posicion " << posicionPenultimo << endl;

    return 0;
}
