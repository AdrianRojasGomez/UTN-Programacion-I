#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55.
Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listará Máximo -5.
*/

int main() {

 int value = -1, mayor = 0;
 bool primerValor = true;

 while (value != 0)
 {
     cout << "Ingresa un numero para guardar el mayor, presione 0 para salir" << endl;
     cin >> value;

     if (primerValor)
     {
         primerValor = false;
         mayor = value;
     }

     if (value > mayor && value != 0)
        mayor = value;

 }

 cout << "El numero mayor es el " << mayor << " .";

 	return 0;
}
