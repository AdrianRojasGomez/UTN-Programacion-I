#include <iostream>
using namespace std;

/*Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es el primer y último número impar ingresado. Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5.*/

int main() {
 int value = -1, primerNumeroImpar = 0, ultimoNumeroimpar = 0;
 bool primerImpar = true;

 cout << "Ingrese numeros, se informa el primer y ultimo impar, salir con 0" <<endl;

 while (value != 0)
 {
     cin >> value;

     if ((value % 2 == 1 || value % 2 == -1)&& value != 0)
     {
         if (primerImpar)
         {
            primerImpar = false;
            primerNumeroImpar = value;
         }
         else
         {
             ultimoNumeroimpar = value;
         }
     }

 }

 cout << "Primer numero impar " << primerNumeroImpar << endl;
 cout << "Ultimo numero impar " << ultimoNumeroimpar << endl;

 	return 0;
}
