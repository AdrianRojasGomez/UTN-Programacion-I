#include <iostream>
using namespace std;


bool EsPar (int numero)
{
    if(numero % 2 == 0)
        return true;
    else
        return false;
}



int main() {
 int ingreso = 0;

 cout << "Ingresa un numero para saber si es par" << endl;
 cin >> ingreso;

 if(EsPar(ingreso))
      cout << "Es par";
  else
    cout << "Es Impar";


 	return 0;
}
