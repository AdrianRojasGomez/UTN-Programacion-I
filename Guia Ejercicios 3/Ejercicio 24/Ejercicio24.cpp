#include <iostream>
using namespace std;

/*Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
El sueldo máximo.
El sueldo mínimo.
El sueldo promedio.
Cantidad de sueldos mayores a $50000.
*/

int main() {

 int sueldoMax = 0, sueldoMin = 0, sueldoSuma = 0, sueldosAltos = 0, sueldo = 0, sueldoPromedio = 0;
 bool primerSueldo = true;


 cout << "Ingrese los 10 salarios" << endl;

 for (int i = 0; i <10; i++)
 {
     cin >> sueldo;
     if (primerSueldo)
     {
         sueldoMax = sueldo;
         sueldoMin = sueldo;
         primerSueldo = false;
     }

     else if (sueldo > sueldoMax)
        sueldoMax = sueldo;
     else if (sueldo < sueldoMin)
        sueldoMin = sueldo;

        if (sueldo > 50000)
        sueldosAltos++;

        sueldoSuma += sueldo;

 }

 sueldoPromedio = sueldoSuma / 10;

 cout << "El sueldo maximo fue de $" << sueldoMax << "." << endl;
 cout << "El sueldo minimo fue de $" << sueldoMin << "." << endl;
 cout << "El sueldo promedio fue de $" << sueldoPromedio << "." << endl;
 cout << "Cantidad de sueldos mayores a $50000 fueron de " << sueldosAltos << "." << endl;

 	return 0;
}
