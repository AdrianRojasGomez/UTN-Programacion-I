#include <iostream>
using namespace std;

int main()
{

    int urgencia = 0;
    bool isUrgente = false;
    int horas = 0;
    int total = 0;
    char lenguaje;

    cout << "Ingrese 1 si es urgente, 0 si no lo es" << endl;
    cin >> urgencia;

    cout << "Ingrese las horas del proyecto" << endl;
    cin >> horas;

    cout << "ingrese el caracter del lenguaje que desea utilizar: " << endl;
    cout << "C/C++ 'C' C# '#' Python 'P' Go 'G'" << endl;

         cin >> lenguaje;

    if (urgencia > 0)
        isUrgente = true;

    switch (lenguaje)
    {
    case 'C':
        total = horas * 7500;
        break;
    case '#':
        total = horas * 6100;
        break;
    case 'P':
        total = horas * 5400;
    case 'G':
        total = horas * 5000;
    default:
        cout << "error" << endl;
        break;
    }

    if (isUrgente)
        total = total * 1.20;

    cout << "El total es de $" << total << " ." << endl;

    return 0;
}
