#include <iostream>
using namespace std;

int main() {
 int S1,S2,S3,S4, total;
 float recaudacionPromedio, PorcentajeS1,PorcentajeS2,PorcentajeS3,PorcentajeS4;

 cout << "Ingrese los valores de recaudacion de cada una de las 4 semanas" <<  endl;
 cin >> S1;
 cin >> S2;
 cin >> S3;
 cin >> S4;

 total = S1 + S2 + S3 + S4;
 recaudacionPromedio = total / 4;
 PorcentajeS1 = (S1 *100) / total;
 PorcentajeS2 = (S2 *100) / total;
 PorcentajeS3 = (S3 *100) / total;
 PorcentajeS4 = 100 - (PorcentajeS1+PorcentajeS2+PorcentajeS3);
 cout << "El promedio de recaudacion es de $" << recaudacionPromedio << "." << endl;
 cout << "A continuacion se muestran los porcentajes de ventas de cada semana:" << endl;
 cout << "Semana 1: " << PorcentajeS1 << "%." << endl;
 cout << "Semana 2: " << PorcentajeS2 << "%." << endl;
 cout << "Semana 3: " << PorcentajeS3 << "%." << endl;
 cout << "Semana 4: " << PorcentajeS4 << "%." << endl;
 	return 0;
}
