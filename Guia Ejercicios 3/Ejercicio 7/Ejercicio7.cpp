#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.
*/

int main()
{

    int negativos = 0;
    int positivos = 0;
    int ceros = 0;
    int valor = 0;

    cout << "Ingrese 5 numeros" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> valor;
        if (valor > 0)
            positivos++;
        else if (valor == 0)
            ceros++;
        else
            negativos++;
    }


    cout << "Hay " << positivos << " numeros positivos" << endl;
    cout << "Hay " << negativos << " numeros negativos" << endl;
    cout << "Hay " << ceros  << " numeros cero" << endl;



    return 0;
}
