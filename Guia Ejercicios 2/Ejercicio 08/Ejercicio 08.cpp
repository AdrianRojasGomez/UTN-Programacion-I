#include <iostream>
using namespace std;

int main()
{

    int lado1,lado2,lado3;
    string triangulo;

    cout << "Ingresa el largo de cada lado: " << endl;

    cin >> lado1;
    cin >> lado2;
    cin >> lado3;

    if (lado1 == lado2)
    {
        if (lado2 == lado3)
        {
            triangulo = "Equilatero";
        }
        else
        {
            triangulo = "Isoceles";
        }
    }
    else
    {
        if (lado1 == lado3)
        {
           triangulo = "Isoceles";
        }
        else
        {
            triangulo = "Escaleno";
        }
    }


    cout << "Es un triangulo " << triangulo;

    return 0;
}
