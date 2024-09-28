#include <iostream>
using namespace std;
/*12
Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es el primer y segundo número impar ingresado. Ejemplo 8, 4, 5, 6, -9, 5, 7, 0 se informa 5 y -9
*/




int main()
{
    int value = -1, primerImpar = 0, segundoImpar = 0;

    cout << "Ingrese numeros para listar el primer y segundo impar, 0 para salir" << endl;

    while (value != 0)
    {
        cin >> value;

        if ((value % 2 == 1 || value % 2 == -1) && value != 0)
        {
            if(primerImpar == 0)
                primerImpar = value;
            else if (segundoImpar == 0)
                segundoImpar = value;
        }
    }

    cout << "El primer impar es :" << primerImpar << endl;
    cout << "El segundo impar es :" << segundoImpar << endl;

    return 0;
}
