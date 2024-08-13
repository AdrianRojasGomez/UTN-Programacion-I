#include <iostream>
using namespace std;

int main() {
 const int PRECIO_DOCENA = 1000;
 const int PRECIO_SUELTO = 120;

 int cantidadHuevos, ventaDocena, ventaSueltos, sueltos, docena, total;

 cout << "Ingrese la cantidad de huevos" << endl;
 cin >> cantidadHuevos;

 sueltos = cantidadHuevos % 12;
 docena = (cantidadHuevos - sueltos) / 12;
 ventaDocena = docena * PRECIO_DOCENA;
 ventaSueltos = sueltos * PRECIO_SUELTO;

 total = ventaDocena + ventaSueltos;

 cout << "El precio a pagar es de $" << total << ".";
 	return 0;
}
