#include <iostream>
using namespace std;
/*Leer 10 n�meros y guardarlos en un vector. Determinar e informar cu�l es el menor de los impares y el mayor de los pares. Suponer que habr� al menos un n�mero par y uno impar.*/

int main()
{

    const int TAMANOLISTA = 10;
    int listaNumeros[TAMANOLISTA] = {};

    int menorImpar = 0, mayorPar = 0;
    bool primerPar = true, primerImpar = true;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero a la lista: " << i+1 << "/10" << endl;
        cin >> listaNumeros[i];

        if (listaNumeros[i] % 2 == 0 && primerPar == true)
        {
            primerImpar = false;
            mayorPar = listaNumeros[i];

        }
        else if (listaNumeros[i] % 2 == 1 && primerImpar == true)
        {
            primerImpar = false;
            menorImpar = listaNumeros[i];
        }
        else if (listaNumeros[i] % 2 == 0 && listaNumeros[i] > mayorPar)
            mayorPar = listaNumeros[i];
        else if (listaNumeros[i] % 2 == 1 && listaNumeros[i] < menorImpar)
            menorImpar = listaNumeros[i];


    }

    cout << "El mayor de los pares es " << mayorPar << endl;
    cout << "El menor de los impares es " << menorImpar << endl;


    return 0;
}
