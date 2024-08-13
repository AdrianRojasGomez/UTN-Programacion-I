#include <iostream>
using namespace std;

int main() {
 int horas, minutosResto, horasResto, minutosAgregados, dias;

 cout << "Ingrese la cantidad de minutos a calcular" << endl;
 cin >> minutosAgregados;

minutosResto = minutosAgregados % 60;
horas = (minutosAgregados-minutosResto) / 60;
horasResto = horas % 24;
dias = (horas - horasResto) / 24;

cout << minutosAgregados << " minutos equivalen a " << dias << " dias, " << horasResto << " horas y " << minutosResto << " minutos.";
 	return 0;
}
