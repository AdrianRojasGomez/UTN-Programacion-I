#include <iostream>
using namespace std;

int main()
{
    int num1, resto;

    cout << "ingrese un numero" << endl;
    cin >> num1;

    resto = num1 % 2;

    if (resto == 0)
        cout << "Es par";
    else
        cout << "Es Impar";



    return 0;
}
