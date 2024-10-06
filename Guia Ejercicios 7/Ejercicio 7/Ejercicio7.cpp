#include <iostream>
using namespace std;

/*Hacer un programa para llenar un vector de 10 elementos con el formato: 1, 0, 1, 0, 1, 0, 1, 0, 1, 0. Luego mostrar los números por pantalla. EL USUARIO NO INGRESA NINGÚN VALOR EN ESTE PROGRAMA.*/

int main()
{

    const int TAMANOVECTOR = 10;
    int vectorBinario[TAMANOVECTOR] = {};

    for (int i = 1; i <= TAMANOVECTOR; i++)
    {
        if (i % 2 ==  1)
            vectorBinario[i-1] = 1;
        else
            vectorBinario[i-1] = 0;
    }

    for (int i = 0; i < TAMANOVECTOR; i++)
    {
        cout << vectorBinario[i] << endl;
    }

    return 0;
}
