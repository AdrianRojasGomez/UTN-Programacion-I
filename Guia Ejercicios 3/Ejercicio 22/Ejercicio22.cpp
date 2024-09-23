#include <iostream>
using namespace std;

/*Dada una lista de 7 números enteros informar el primer número par ingresado y su ubicación en la lista y el último de los números primos y su ubicación en la lista. Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa:
Primer número par: 4 ubicación 2. Último primo: 13 ubicación 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa:
Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.
*/

int main()
{

    int valor = 0;
    int primerPar = 0, ubicacionPar = 0;
    int ultimoPrimo = 0, ubicacionPrimo = 0;
    int contadorDivisor = 0;

    cout << "Ingrese los numeros para comprobar cual es el primer par y el ultimo primo en la lista" << endl;

    for (int i = 1; i <= 7; i++)
    {
        cin >> valor;

        if (valor % 2 == 0 && primerPar == 0)
        {
            primerPar = valor;
            ubicacionPar = i;
        }

        for (int j = 1; j <= valor; j++)
        {
            if (valor % j == 0)
            {
                contadorDivisor++;
            }
        }

        if (contadorDivisor == 2)
        {
            ultimoPrimo = valor;
            ubicacionPrimo = i;
        }
        contadorDivisor = 0;
    }

    cout << "Primer Par; " << primerPar << " Ubicacion: " << ubicacionPar <<endl;
    cout << "Ultimo Primo; " << ultimoPrimo << " Ubicacion: " << ubicacionPrimo <<endl;

    return 0;
}
