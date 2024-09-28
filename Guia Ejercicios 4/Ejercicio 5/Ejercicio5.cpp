#include <iostream>
using namespace std;

/*Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos. Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15; y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
*/

int main()
{

    int inputA = 0, inputB = 0, mayor = 0, menor = 0;

    cout << "Ingrese el valor A" << endl;
    cin >> inputA;
    cout << "Ingrese el valor B" << endl;
    cin >> inputB;

    if (inputA > inputB)
    {
        mayor = inputA;
        menor = inputB;
    }
    else
    {
        mayor = inputB;
        menor = inputA;
    }

    while (menor <= mayor)
    {
        cout << menor << endl;
        menor++;
    }


    return 0;
}
