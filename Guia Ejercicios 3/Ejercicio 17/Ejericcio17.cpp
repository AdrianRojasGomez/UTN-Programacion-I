#include <iostream>
using namespace std;

/* Hacer un programa para ingresar un n�mero entero y luego informar todos los divisores de ese n�mero.
Ejemplo A. Si se ingresa 6 se listar�n: 1, 2, 3 y 6
Ejemplo B. Si se ingresa 9 se listar�n: 1, 3 y 9.
Ejemplo 3. Si se ingresa 11 se listar�n 1 y 11.
*/


int main() {

int n;

cout << "Ingrese el numero al que quiere saber sus divisores" << endl;
cin >> n;

cout << "Los divisores de " << n << " son :" << endl;
for (int i = 1; i <= n; i++)
{
    if ( n % i == 0)
    {
        cout << i << "." << endl;
    }

}
 	return 0;
}
