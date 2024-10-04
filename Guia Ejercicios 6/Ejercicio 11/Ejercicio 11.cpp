#include <iostream>
using namespace std;

/*Hacer una funci�n llamada contarDigitos que reciba por valor un n�mero entero y determine y devuelva la cantidad de d�gitos del n�mero. Por ejemplo, si se recibe el n�mero 840 debe devolver 3.
Hacer un programa que, a partir de un n�mero que ingresa el usuario, informe por pantalla la cantidad de d�gitos del n�mero ingresado.
*/

int ContarDigitos (int numero)
{
    int contadorDigitos = 0;

    if (numero < 0)
        numero *= -1;

    for (int i = 1; i <= numero; i = i * 10)
    {
        if(numero / i > 1 )
            contadorDigitos++;
    }

    return contadorDigitos;

}

int main()
{
    int ingreso;

    cout << "Ingrese el numero para contar sus digitos" << endl;
    cin >> ingreso;

    cout << "Tiene " << ContarDigitos(ingreso) << " digitos." << endl;

    return 0;
}
