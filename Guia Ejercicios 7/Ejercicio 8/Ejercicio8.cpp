#include <iostream>
using namespace std;

/* Dada una lista de n£meros compuesta por 10 subgrupos
y cada grupo separado del siguiente por un cero, se pide
generar un vector de 10 elementos con el m ximo de cada
uno de los subgrupos. Luego mostrar los elementos del vector por pantalla.*/

int main()
{
    const int TAMANO_LISTA = 10, SUBGRUPOS = 10;
    int maximos[TAMANO_LISTA] {};
    int ingreso = -1;
    bool primerValor;

    for (int i = 0; i < SUBGRUPOS; i++)
    {
        cout << "Ingrese el primer numero del subgrupo " << i+1 << endl;
        primerValor = true;
        cin >> ingreso;
        while(ingreso != 0)
        {
            if (primerValor)
            {
                primerValor = false;
                maximos[i] = ingreso;
            }
            else if (ingreso > maximos[i])
            {
                maximos[i] = ingreso;
            }

            cout << "Ingrese el siguiente numero del subgrupo " << i+1 << " o ingrese 0 para salir." <<endl;
            cin >> ingreso;
        }
    }

    for (int i = 0; i < TAMANO_LISTA; i++)
    {
        if(maximos[i] != 0)
            cout << "El valor maximo del subgrupo " << i+1 << " es " << maximos[i] << endl;
        else
            cout << "El subgrupo " << i+1 << " no ingreso valores" << endl;
    }

    return 0;
}
