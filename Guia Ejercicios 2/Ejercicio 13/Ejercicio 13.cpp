#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    int mayor, medio, menor;
    cout << "Ingrese 3 numeros para ordenarlos de menor a mayor" << endl;
    cin >> n1;
    cin >>n2;
    cin >>n3;

    if  (n1>n2)
    {
        mayor = n1;
        medio = n2;
    }
    else
    {
        mayor = n2;
        medio = n1;
    }

    if  (n3 > mayor)
    {
        menor = medio;
        medio = mayor;
        mayor = n3;
    }
    else
    {
        if  (n3 > medio)
        {
            menor = medio;
            medio = n3;
        }
        else
        {
            menor = n3;
        }
    }

    cout << "De menor a mayor los numeros son: " << menor << ", " << medio << ", y " << mayor << "." << endl;
    return 0;
}
