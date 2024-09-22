#include <iostream>
using namespace std;

/*Dada una lista de 7 números enteros informar cual es el primer, el segundo, el anteúltimo y el último número impar ingresado.
Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7, Anteúltimo impar: 9 y Último impar: 5.
*/

int main() {

 int valor;
 int valorAbs;
 int primerImpar;
 int segundoImpar;
 int penultimoImpar;
 int ultimoImpar;
 int contadorImpar = 0;

 for (int i =1; i <= 7; i++)
 {
     cout << "Ingrese el numero " << i << "/7" << endl;
     cin >> valor;
     valorAbs = abs(valor);
     if (valorAbs % 2 == 1)
     {
         contadorImpar++;
         if (contadorImpar == 1)
            primerImpar = valor;
         else if (contadorImpar == 2)
            segundoImpar = valor;

         ultimoImpar = valor;
     }
 }

    cout << "El primer impar es el " << primerImpar << endl;
    cout << "El segundo impar es el " << segundoImpar << endl;
    cout << "El ultimo impar es el " << ultimoImpar << endl;


 	return 0;
}
