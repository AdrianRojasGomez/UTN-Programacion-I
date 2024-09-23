#include <iostream>
using namespace std;

/*Se define a un número entero como primo cuando tiene solamente dos divisores. Ejemplo A: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos divisores.
Ejemplo B: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6)
Ejemplo C: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
*/

int main()
{

    int n;
    int contadorDivisor;

    cout << "ingrese el numero para validar si es primo" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
            contadorDivisor++;
    }

    if (contadorDivisor == 2)
        cout << "Es primo";
    else
        cout << "No es primo";


    return 0;
}
