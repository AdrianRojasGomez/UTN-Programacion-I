#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "Ingresa el numero para comprobar si es mayor o menor a 0" << endl;
    cin >> numero;

    if (numero < 0)
    {
        cout << "Es negativo";
    }
    else
    {
        if (numero == 0)cout << "Es cero";
        else
            cout << "Es positivo";
    }
    return 0;
}
