#include <iostream>
using namespace std;
/*Hacer una función llamada CalcularMaximo que determine el máximo entre dos números. La función debe recibir dos números enteros
por valor y devolver el valor más grande. Si los números son iguales debe devolver cualquiera de los dos.
La función no debe mostrar nada por pantalla.
Hacer un programa para ingresar dos números y, utilizando CalcularMaximo, emita luego el número mayor de ambos.
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
