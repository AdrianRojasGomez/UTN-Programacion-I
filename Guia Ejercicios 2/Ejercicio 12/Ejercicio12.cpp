#include <iostream>
using namespace std;

int main()
{

    int n1, n2, n3, medio;

    cout << "Ingrese 3 numeros para calcular el del medio" << endl;

    cin >> n1;
    cin >> n2;
    cin >> n3;

	if (n1>n2 && n1>n3) {
		if (n2>n3) {
			medio = n2;
		} else {
			medio = n3;
		}
	} else {
		if (n2>n1 && n2>n3) {
			if (n1>n3) {
				medio = n1;
			} else {
				medio = n3;
			}
		} else {
			if (n1>n2) {
				medio = n1;
			} else {
				medio = n2;
			}
		}
	}


    cout << "El numero medio es: " << medio << endl;

    return 0;
}
