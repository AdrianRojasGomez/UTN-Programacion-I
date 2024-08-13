#include <iostream>
using namespace std;

int main() {
 int totales, ocupados;
 float ocupacionPorcentaje, noOcupacionPorcentaje;

 cout<< "Ingrese el total de asientos y la cantidad de pasajes ocupados" << endl;
 cin >> totales;
 cin >> ocupados;
 ocupacionPorcentaje = (ocupados * 100) / totales;
 noOcupacionPorcentaje = 100 - ocupacionPorcentaje;
 cout << "El porcentaje de ocupacion es de " << ocupacionPorcentaje << "%.\nEl porcentaje de no Ocupacion es de: " << noOcupacionPorcentaje << "%.";
 	return 0;
}
