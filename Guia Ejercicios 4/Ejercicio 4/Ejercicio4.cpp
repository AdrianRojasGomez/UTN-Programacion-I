#include <iostream>
using namespace std;

/*Hacer un programa para que el usuario ingrese un n�mero positivo y que luego se muestre por pantalla los n�meros entre el 1 y el n�mero ingresado por el usuario. Ejemplo. Si el usuario ingresa 15, se mostrar�n los n�meros entre el 1 y el 15.*/

int main() {

 int min = 1, max = 0;

 cout << "Ingresa un valor " <<endl;
 cin >> max;

 while (min <= max)
 {
     cout << min <<endl;
     min++;
 }

 	return 0;
}
