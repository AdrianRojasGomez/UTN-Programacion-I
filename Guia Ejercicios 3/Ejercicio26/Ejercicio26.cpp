#include <iostream>
using namespace std;

/*Hacer un programa que muestre los números primos entre el 1 y el 10000. El usuario no debe ingresar nada en este programa.
*/

int main() {

 int contadorPrimo = 0;

 for (int i = 1; i <= 1000; i++)
 {
     for (int j = 1; j <= i; j++)
     {
         if (i % j == 0)
            contadorPrimo++;
     }
     if (contadorPrimo == 2)
        cout << i << endl;
     contadorPrimo = 0;
 }


 	return 0;
}
