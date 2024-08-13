#include <iostream>
using namespace std;

int main() {
int horasAgregadas, horasRestantes, dias;

cout << "Ingerese la cantidad de horas a calcular" << endl;
cin >> horasAgregadas;

horasRestantes = horasAgregadas % 24;
dias = (horasAgregadas-horasRestantes) / 24;

cout << horasAgregadas << " horas equivale a " << dias << " dias y " << horasRestantes << " horas.";
 	return 0;
}
