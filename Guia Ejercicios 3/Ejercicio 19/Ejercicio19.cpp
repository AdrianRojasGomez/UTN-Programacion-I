#include <iostream>
using namespace std;

/*Hacer un programa para ingresar un n�mero entero y luego informar la cantidad de divisores de ese n�mero.
Ejemplo A. Si se ingresa 6 se listar�: 4 divisores.
Ejemplo B. Si se ingresa 9 se listar�: 3 divisores.
Ejemplo C. Si se ingresa 11 se listar�: 2 divisores.
*/

int main() {

 int n;
 int contadorDivisor = 0;

 cout << "Ingrese el numero que desea saber la cantidad de divisores" << endl;
 cin >> n;

 for (int i = 1; i <= n; i++)
 {
     if (n % i == 0)
        contadorDivisor++;
 }

 cout << "el numero de divisores que tiene " << n << " es de " << contadorDivisor << " divisores." << endl;
 	return 0;
}
