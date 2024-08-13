#include <iostream>
using namespace std;

int main() {

 int a,b,c;


 cout<< "Ingresa un valor numerico para A y B" << endl;
 cin >> a >> b;
 c = a;
 a = b;
 b = c;
 cout << "El valor de A ahora es de " << a << ", y el valor de B ahora es de " << b << ".";
 	return 0;
}
