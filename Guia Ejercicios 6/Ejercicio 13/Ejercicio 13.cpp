#include <iostream>
using namespace std;
/*
Escribir una función llamada calcularPotencia para que, dados dos números enteros, calcule y devuelva la potencia del primero a la del segundo. Tener en cuenta las siguientes posibilidades:
 calcularPotencia(2, 3)   8
 calcularPotencia(2, 0)   1
 calcularPotencia(2, -3)   0,125

*/


float CalcularPotencia (int base, int exponente)
{
    float valor = 1;

    if(exponente > 0)
    {
        valor = base;
        for (int i = 1; i < exponente; i++)
        {
            valor *= base;
        }
    }
    else if (exponente < 0)
    {
        exponente *= -1;
        valor = (1.0 / base);
        for (int j = 1; j < exponente; j++)
        {
            valor *= 1.0/base;
        }
    }


    return valor;
}


int main()
{

    int base = 0, exponente = 0;
    float resultado = 0;


    cin >> base;
    cin >> exponente;

    resultado = CalcularPotencia(base,exponente);

    cout << resultado;



    return 0;
}
