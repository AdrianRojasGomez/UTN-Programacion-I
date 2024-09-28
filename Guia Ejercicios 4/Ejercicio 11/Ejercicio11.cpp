#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, informar el m�ximo de los negativos y el m�nimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0.
M�ximo Negativo: -3.
M�nimo Positivo: 2.
*/

int main() {

 int value = -1, minPositivo = 0, maxNegativo = 0;
 bool primerPositivo = true, primerNegativo = true;


 cout << "Ingrese el valor, se informara el m�ximo de los negativos y el m�nimo de los positivos." << endl;

 while (value != 0)
 {
     cin >> value;
     if (value > 0)
     {
         if(primerPositivo)
         {
             primerPositivo = false;
             minPositivo = value;
         }
         else if (value < minPositivo)
            minPositivo = value;
     }
     else if (value < 0)
     {
         if (primerNegativo)
         {
             primerNegativo = false;
             maxNegativo = value;
         }
         else if(value > maxNegativo)
            maxNegativo = value;
     }

 }
     cout << "Maximo Negativo " << maxNegativo << endl;
     cout << "Minimo Positivo " << minPositivo << endl;

 	return 0;
}
