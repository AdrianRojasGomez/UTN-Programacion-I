#include <iostream>
using namespace std;

/*
Escribir una función CalcularMaximoAbsoluto que reciba dos números y retorne el máximo absoluto de ambos. Por ejemplo el máximo absoluto de los números -40 y 20 es 40.
Hacer un programa para ingresar dos números y, utilizando CalcularMaximoAbsoluto, emita luego el número mayor absoluto de ambos.
*/

int CalcularMaximoAbsoluto (int num1, int num2)
{
    if (num1 < 0)
        num1 *= -1;
    if (num2 < 0)
        num2 *= -1;
    if (num1 > num2)
        return num1;
    else
        return num2;

}


int main()
{
    int ingreso1 = 0, ingreso2 = 0, maxAbsoluto = 0;

    cout << "Ingrese 2 numeros" << endl;
    cin >> ingreso1;
    cin >> ingreso2;
    maxAbsoluto = CalcularMaximoAbsoluto(ingreso1, ingreso2);
    cout << "El Maximo Absoluto es " << maxAbsoluto << "." << endl;
    return 0;
}
