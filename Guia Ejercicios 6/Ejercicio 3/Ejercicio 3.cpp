#include <iostream>
using namespace std;
/*Hacer una función llamada EsPrimo que determine si un número es primo o no. La función debe recibir el número y devolver
true si es primo o false si no lo es. La función no debe mostrar nada por pantalla.
Hacer un programa para ingresar un número y, utilizando EsPrimo, emita luego un cartel
 indicando si el número ingresado es primo o no es primo.
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
