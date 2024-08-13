#include <iostream>
using namespace std;

int main() {
 int importe, porcentajeDescuento, total, descuento;

 cout << "Ingrese el importe" << endl;
 cin >> importe;
 cout << "Ingrese el descuento a Aplicar" << endl;
 cin >> porcentajeDescuento;

 descuento = (porcentajeDescuento * importe) / 100;
 total = importe - descuento;

 cout << "El importe era de: $" << importe << ". El descuento aplicado es de: $" << descuento << ". El total es de: $" << total << endl;
 	return 0;
}
