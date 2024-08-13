#include <iostream>
using namespace std;

int main() {
 float precioSinDescuento, precioConDescuento;
 int porcentajeVenta, porcentajeDescuento;

 cout << "Ingrese El precio de la venta sin descuento" << endl;
 cin >> precioSinDescuento;
 cout << "Ingrese El precio de la venta con descuento" << endl;
 cin >> precioConDescuento;

 porcentajeVenta = (precioConDescuento * 100) / precioSinDescuento;
 porcentajeDescuento = 100 - porcentajeVenta;

 cout << "El porcentaje de Descuento es del: " << porcentajeDescuento << "%.";
 	return 0;
}
