#include <iostream>
using namespace std;

/*Leer 10 n�meros y guardarlos en un vector. Determinar e informar cu�l es el valor m�ximo absoluto del vector. Por ejemplo 20, -43 y 5, el m�ximo absoluto es -43.
*/

int main()
{

    const int TAMANOLISTA = 10;
    int listaNumeros[TAMANOLISTA] = {};
    int maximoAbs = 0, posicionMaxAbs = 0;

    for (int i = 0; i < TAMANOLISTA ; i++)
    {
         int valorAbsoluto = 0;

        cout << "Ingrese un numero a la lista: " << i+1 << "/10" << endl;
        cin >> listaNumeros[i];

        if (listaNumeros[i] < 0)
            valorAbsoluto = listaNumeros[i] * -1;
        else
            valorAbsoluto = listaNumeros[i];

        if (i == 0)
        {
            maximoAbs = valorAbsoluto;
            posicionMaxAbs = i;
        }
        else if (valorAbsoluto > maximoAbs)
        {
            maximoAbs = valorAbsoluto;
            posicionMaxAbs = i;
        }

    }

    cout << "El maximo absoluto es el " << listaNumeros[posicionMaxAbs] << endl;

         return 0;
}
