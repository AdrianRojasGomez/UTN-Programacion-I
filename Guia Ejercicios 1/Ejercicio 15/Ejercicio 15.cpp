#include <iostream>
using namespace std;

int main() {
 int TMax, TMin, amplitud;

 cout << "Ingrese la Temperatura Maxima y la Temperatura Minima para calcular la amplitud" << endl;
 cin >> TMax;
 cin >> TMin;

 amplitud = TMax - TMin;

 cout << "La amplitud Termica es de: " << amplitud << ".";
 	return 0;
}
