#include <iostream>
using namespace std;
/*
�Cu�l de los siguientes c�digos representa correctamente el algoritmo de un programa en el que se ingresan 10
n�meros enteros y muestra la cantidad de n�meros positivos de la lista?
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
