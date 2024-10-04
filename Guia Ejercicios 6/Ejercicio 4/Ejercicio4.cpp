#include <iostream>
using namespace std;

/*Hacer una funci�n llamada EsPrimoSophieGermain que reciba un n�mero entero y determine si el mismo es un n�mero primo de Sophie Germain. Debe devolver verdadero si lo es y falso si no lo es.
NOTA: En teor�a de n�meros, se dice que un n�mero natural es un n�mero primo de Sophie Germain, si el n�mero n es primo y 2*n+1 tambi�n lo es.
Ejemplo:
El n�mero 2 es n�mero primo de Sophie Germain porque:
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
