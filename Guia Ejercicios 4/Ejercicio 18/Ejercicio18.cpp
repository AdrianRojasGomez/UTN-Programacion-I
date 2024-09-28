#include <iostream>
using namespace std;
/*
Se define a un número como primo cuando tiene solamente dos divisores. Ejemplo 1: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos divisores.
Ejemplo 2: 6 no es primo, pues tiene 4 divisores (1, 2 3 y 6)
Ejemplo 3: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
*/

int main()
{
    int valor = -1, cantidadDivisor = 0, div;
    cout << "Ingrese un numero para verificar si es primo, Ingrese 0 para terminar" << endl;


    cin >> valor;
    div = 2;
    while (valor % div !=0 && valor > 1)
    {
        div++;
    }

    if (valor == div)
        cout << "Es primo" << endl;
    else
        cout << "No es primo" << endl;
}
