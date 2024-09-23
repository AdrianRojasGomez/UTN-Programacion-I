#include <iostream>
using namespace std;

/*Se define como divisores propios de un número entero a aquellos que son sus divisores excluyendo al número en sí mismo.
Ejemplo A. Los divisores propios del 4 son: 1 y 2.
Ejemplo B. Los divisores propios del 12 son: 1, 2, 3, 4 y 6.
*/

int main()
{

    int n = 0;
    int sumaDivisores = 0;

    cout << "Ingrese un numero para validar si es un numero perfecto" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i != n)
            sumaDivisores += i;
    }

    if (sumaDivisores == n)
        cout << "Es perfecto" <<endl;
    else
        cout << "No es perfecto" << endl;

    return 0;
}
