#include <iostream>
using namespace std;
/*Hacer una funci�n llamada CalcularMaximo que determine el m�ximo entre dos n�meros. La funci�n debe recibir dos n�meros enteros
por valor y devolver el valor m�s grande. Si los n�meros son iguales debe devolver cualquiera de los dos.
La funci�n no debe mostrar nada por pantalla.
Hacer un programa para ingresar dos n�meros y, utilizando CalcularMaximo, emita luego el n�mero mayor de ambos.
*/

int CalcularMaximo (int n1, int n2)
{
    if (n1 >= n2)
        return n1;
    else
        return n2;
}



int main() {

 int ingreso1 = 0, ingreso2 = 0;

 cout << "Ingrese 2 valores para calcular el maximo" << endl;
 cin >> ingreso1;
 cin >> ingreso2;

 cout << "El maximo es " << CalcularMaximo(ingreso1, ingreso2) << "." << endl;

 	return 0;
}
