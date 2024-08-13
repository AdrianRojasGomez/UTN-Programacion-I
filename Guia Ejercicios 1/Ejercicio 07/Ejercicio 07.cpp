#include <iostream>
using namespace std;

int main() {
float venta, cantidadDescuento, total;
int PorcentajeDescuento;

cout << "Ingrese el precio del producto" << endl;
cin >> venta;
cout << "Ingrese el porcentaje de descuento" << endl;
cin >> PorcentajeDescuento;

cantidadDescuento = (venta * PorcentajeDescuento) / 100;
total = venta - cantidadDescuento;

cout << "El precio con el descuento es de: $" << total << "." << endl;
 	return 0;
}
