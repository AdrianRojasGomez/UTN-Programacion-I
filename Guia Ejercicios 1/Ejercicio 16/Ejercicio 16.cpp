#include <iostream>
using namespace std;

int main() {
 int const pildorasPP = 75;
 int const BetamolPP = 45;
 int const MilicinaPP = 2;
 int const AcidoPP = 7;

 int frascos, totalPastillas, BetamolTotal, MilicinaTotal, AcidoTotal;

 cout << "Ingrese la cantidad de frascos" << endl;
 cin >> frascos;

 totalPastillas = frascos * pildorasPP;
 BetamolTotal = BetamolPP * totalPastillas;
 MilicinaTotal = MilicinaPP * totalPastillas;
 AcidoTotal = AcidoPP * totalPastillas;

 cout << "Se necesitan " << BetamolTotal << " mg de Betamol, " << MilicinaTotal << " g de Milicina y " << AcidoTotal << " mg de Acido Sinitico para la elaboracion de " << frascos << " frascos.";


 	return 0;
}
