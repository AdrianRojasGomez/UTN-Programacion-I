#include <iostream>
using namespace std;
/*
¿Cuál de los siguientes códigos representa correctamente el algoritmo de un programa en el que se ingresan 10
números enteros y muestra la cantidad de números positivos de la lista?
*/
int main() {

 int i, n, c = 0;
 for (i = 1; i <= 10; i++)
 {
     cin >> n;
     if (n > 0)
     {
         c++;
     }
 }
 cout << c;
 	return 0;
}
