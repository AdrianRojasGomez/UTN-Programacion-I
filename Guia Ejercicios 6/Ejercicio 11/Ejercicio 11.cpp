#include <iostream>
using namespace std;

/*Hacer una función llamada contarDigitos que reciba por valor un número entero y determine y devuelva la cantidad de dígitos del número. Por ejemplo, si se recibe el número 840 debe devolver 3.
Hacer un programa que, a partir de un número que ingresa el usuario, informe por pantalla la cantidad de dígitos del número ingresado.
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
