#include <iostream>
using namespace std;

int main() {
 int ingreso;
 int restoMil, restoQuinientos, restoDoscientos;
 int billeteMil, billeteQuinientos, billeteDoscientos, billeteCien;

 cout << "Ingresa la cantidad de dinero a retirar" << endl;
 cin >> ingreso;

 restoMil = ingreso % 1000;
 billeteMil = (ingreso - restoMil) / 1000;
 restoQuinientos = restoMil % 500;
 billeteQuinientos = (restoMil - restoQuinientos) / 500;
 restoDoscientos = restoQuinientos % 200;
 billeteDoscientos = (restoQuinientos - restoDoscientos) / 200;
 billeteCien = restoDoscientos / 100;

 cout << "La cantidad a billetes a retirar es de: " << endl;
 cout << billeteMil << " billetes de $1000, " << billeteQuinientos << " billetes de $500, " << billeteDoscientos << " billetes de $200, " << billeteCien <<" billetes de $100" << endl;

 	return 0;
}
