#include <iostream>
using namespace std;

/*Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el valor máximo y su posición dentro del vector.*/


void ActualizarMaximo(int numero, int posicion, int& maximo, int& posicionMaximo)
{
    maximo = numero;
    posicionMaximo = posicion + 1;
}

int main()
{

    const int TAMANOLISTA = 10;
    int listaNumeros[TAMANOLISTA] = {};
    int maximo = 0, posicionMaximo = 0;

    for (int i = 0; i < TAMANOLISTA ; i++)
    {
        cout << "Ingrese un numero a la lista: " << i+1 << "/10" << endl;
        cin >> listaNumeros[i];

        if (i == 0)
            ActualizarMaximo(listaNumeros[i], i, maximo, posicionMaximo);
        else if (listaNumeros[i] > maximo)
            ActualizarMaximo(listaNumeros[i], i, maximo, posicionMaximo);
    }

    cout << "El numero maximo ingresado fue el " << maximo << " en la posicion " << posicionMaximo << ".";

    return 0;
}


