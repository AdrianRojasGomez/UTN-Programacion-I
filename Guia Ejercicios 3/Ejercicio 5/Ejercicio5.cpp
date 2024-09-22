#include <iostream>
using namespace std;

//Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos.
//Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15 y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.


int main()
{
    int n1, n2, mayor,menor;

    cout << "Ingrese 2 numeros para mostrar los numeros que existen en el rango" << endl;
    cin >> n1;
    cin >> n2;

    if (n1 > n2)
    {
        mayor = n1;
        menor = n2;
    }
    else
    {
        mayor = n2;
        menor = n1;
    }

    for (int i = menor ; i <= mayor; i++)
    {
        cout << i << endl;
    }


            return 0;
}
