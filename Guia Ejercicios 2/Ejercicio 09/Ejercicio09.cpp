#include <iostream>
using namespace std;

int main()
{

    int num1,num2,num3,mayor;

    cout << "Ingrese 3 valores seguidos para validar el valor mayor" << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;

    if (num1 > num2)
    {
        if  (num1 > num3)
        {
            mayor = num1;
        }
        else
        {
            mayor = num3;
        }
    }
    else
    {
        if  (num2 > num3)
        {
            mayor = num2;
        }
        else
        {
            mayor = num3;
        }
    }

    cout << "El valor mayor es " << mayor;

    return 0;
}
