#include <iostream>
using namespace std;

int main()
{

    int num1, num2, diferencia;

    cout << "Ingrese 2 numeros" << endl;
    cin >> num1;
    cin >> num2;

    if (num1 > num2)
        diferencia = num1 - num2;
    else
        diferencia = num2 - num1;

    cout << "La diferencia es de: " << diferencia;



    return 0;
}
