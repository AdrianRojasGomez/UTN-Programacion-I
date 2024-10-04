#include <iostream>
using namespace std;
/*Hacer una funci�n llamada EsPrimo que determine si un n�mero es primo o no. La funci�n debe recibir el n�mero y devolver
true si es primo o false si no lo es. La funci�n no debe mostrar nada por pantalla.
Hacer un programa para ingresar un n�mero y, utilizando EsPrimo, emita luego un cartel
 indicando si el n�mero ingresado es primo o no es primo.
*/


bool EsPrimo(int numero)
{
    int div = 2;
    while (numero%div != 0 && numero > 1)
    {
        cout << "Intento" << endl;
        div++;
    }
    if (numero == div)
        return true;
    else
        return false;
}



int main()
{
    int ingreso;

    cout << "Ingrese un valor para calcular si es primo" << endl;
    cin >> ingreso;

    if(EsPrimo(ingreso))
        cout << "Es primo";
    else
        cout << "No es primo";



    return 0;
}
