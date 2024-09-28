#include <iostream>
using namespace std;

int main() {

 int value = -1, positivos = 0, negativos = 0;

 while (value != 0)
 {
     cout << "Ingrese un valor" <<endl;
     cin >> value;

     if(value > 0)
        positivos++;
     else
        negativos++;
 }

 cout << "En el conjunto ingresado existen: " << endl;
 cout << positivos << " Numeros Positivos." << endl;
 cout << negativos << " Numeros Negativos." << endl;


 	return 0;
}
