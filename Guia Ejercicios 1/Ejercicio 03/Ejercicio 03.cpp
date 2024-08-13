#include <iostream>
using namespace std;

int main() {
 const int FIJO = 5000;
 const int VALOR_AUTO = 700;
 int cantidadAutos, sueldo;

 cout << "Ingrese la cantidad de autos" << endl;
 cin >> cantidadAutos;
 sueldo = (cantidadAutos*VALOR_AUTO) + FIJO;
 cout << "El sueldo es de $" << sueldo << ".";
 	return 0;
}
