#include <iostream>
using namespace std;

int main() {
int N, suma = 0;
cout << "Ingrese un numero: ";
cin >> N;
for (int i = 1; i <= N; i++)
{
    suma +=i;
}
cout << "Suma: " << suma;
 	return 0;
}
