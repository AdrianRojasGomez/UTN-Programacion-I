#include <iostream>
using namespace std;

/*Hacer un programa para que el usuario ingrese un número positivo y que luego se muestre por pantalla los números entre el 1 y el número ingresado por el usuario. Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.*/

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
