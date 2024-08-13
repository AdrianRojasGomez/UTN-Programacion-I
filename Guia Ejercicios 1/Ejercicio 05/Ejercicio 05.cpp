#include <iostream>
using namespace std;

int main() {
 int A, B, C, total;
 float PA, PB, PC;
 cout << "Ingrese cada una de las ventas de alfajores A, B y C respectivamente" << endl;
 cin >> A;
 cin >> B;
 cin >> C;

 total = A + B + C;
 PA = (A * 100)/total;
 PB = (B * 100)/total;
 PC = (C * 100)/total;

 cout << "El porcentaje de venta del alfajor A es de: " << PA << "%" << endl;
 cout << "El porcentaje de venta del alfajor B es de: " << PB << "%" << endl;
 cout << "El porcentaje de venta del alfajor C es de: " << PC << "%" << endl;
    return 0;
}
