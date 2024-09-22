#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de 10 números e informar el máximo de los negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2.
*/
int main()
{

    int valor = 0;
    int maxNegativo = 0;
    int minPositivo = 0;
    bool primerPositivo = true;
    bool primerNegativo = true;

    cout << "Ingrese 10 numeros para listar el maximo de los negativos y el minimo de los positivos" << endl;


    for (int i = 1; i <= 10; i++)
    {
        cout << "ingrese el " << i << " numero: ";
        cin >> valor;

        if( valor > 0)
        {
            if (primerPositivo)
            {
                minPositivo = valor;
                primerPositivo = false;
            }
            else if (valor < minPositivo)
                minPositivo = valor;
        }

        else if (valor < 0)
        {
            if (primerNegativo)
            {
                maxNegativo = valor;
                primerNegativo = false;
            }
            else if (valor > maxNegativo)
                maxNegativo = valor;
        }

    }


    cout << "El mayor negativo es " << maxNegativo << " ." << endl;
    cout << "El menor positivo es " << minPositivo << " ." << endl;

}
