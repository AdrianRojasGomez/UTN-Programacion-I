#include <iostream>
using namespace std;

int main() {
 int horas, minutos, agregados;

 cout << "Ingrese los minutos a calcular: " << endl;
 cin >> agregados;
 minutos = agregados % 60;
 horas = (agregados - minutos) / 60;

 cout << agregados << " minutos equivalen a " << horas << "h" << minutos << "m" << endl;

 	return 0;
}
