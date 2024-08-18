#include <iostream>
using namespace std;

int main()
{

    int num1,num2,resto;

    cout << "Ingrese dos numeros" << endl;
    cin >> num1;
    cin >> num2;

    resto = num2 % num1;

    if  (resto == 0)
        cout << num1 << " Es multiplo de " << num2;
    else
        cout << num1 << " No es multiplo de " << num2;

    return 0;
}
