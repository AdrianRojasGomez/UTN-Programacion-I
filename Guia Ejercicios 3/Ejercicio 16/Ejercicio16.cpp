#include <iostream>
using namespace std;

/*Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores ingresados, aclarando cual es el máximo y cuál el que le sigue.
Ejemplo A: 10, 8, 12, 14, 3 el resultado será 14 y 12.
Ejemplo B: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
Ejemplo C: -4, -8, -12, -20, -10 el resultado será -4 y -8
Ejemplo D: 100, 20, 5, -15, 70, el resultado será 100 y 70.
Ejemplo E: -100, -20, -5, 15, -70, el resultado será 15 y -5.
*/

int main() {

int n, mayor, segundoMayor;

cout << "Se calcularan el mayor y el siguiente numero mayor" << endl;
cout << "Ingrese un numero" << endl;

cin >> n;
mayor = n;
cin >> n;

if  (n > mayor)
    mayor = n;
else
    segundoMayor = n;

for (int i = 0; i < 3; i++)
{
    cin >> n;
    if (n > mayor)
    {
        segundoMayor = mayor;
        mayor = n;
    }
    else
    {
        if (n > segundoMayor)
            segundoMayor = n;
    }
}

cout << "Mayor " << mayor << " Segundo Mayor " << segundoMayor << " ." << endl;

 	return 0;
}
