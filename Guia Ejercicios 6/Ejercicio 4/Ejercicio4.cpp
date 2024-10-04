#include <iostream>
using namespace std;

/*Hacer una función llamada EsPrimoSophieGermain que reciba un número entero y determine si el mismo es un número primo de Sophie Germain. Debe devolver verdadero si lo es y falso si no lo es.
NOTA: En teoría de números, se dice que un número natural es un número primo de Sophie Germain, si el número n es primo y 2*n+1 también lo es.
Ejemplo:
El número 2 es número primo de Sophie Germain porque:
2 es primo
2*2+1  5 es primo.
*/

bool EsPrimo(int numero)
{
    int div = 2;
    while (numero%div != 0 && numero > 1)
    {
        div++;
    }
    if (numero == div)
        return true;
    else
        return false;
}


bool EsPrimoSophieGermain(int numero)
{
    if (EsPrimo(numero))
    {
        int aux = 2 * numero + 1;
        if(EsPrimo(aux))
            return true;
        else
            return false;

    }
}


int main()
{
    int ingreso;

    cout << "Ingrese un numero para calcular si es un primo de Sophie Germain" << endl;
    cin >> ingreso;

    if(EsPrimoSophieGermain(ingreso))
    cout << "Es primo de Sophie Germain";
    else
        cout << "No es primo de Sophie Germain";

    return 0;
}
