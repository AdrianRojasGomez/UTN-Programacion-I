#include <iostream>
using namespace std;

int main() {
 int n1,n2,n3,n4;

 cout << "Ingresa los 4 numeros para validar si es un cojunto ordenado" << endl;

 cin >> n1;
 cin >> n2;
 cin >> n3;
 cin >> n4;

 if (n4 >= n3 && n3 >= n2 && n2 >= n1)
    cout << "Conjunto Ordenado" << endl;
 else
    cout << "Conjunto Desordenado" << endl;


 	return 0;
}
