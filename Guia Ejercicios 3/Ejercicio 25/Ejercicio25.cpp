#include <iostream>
using namespace std;

/*Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
El legajo del empleado con mayor sueldo
*/

int main()
{

    bool primeraVez = false;
    int legajo = 0, sueldo = 0;
    int legajoM = 0, sueldoM = 0;

    cout << "Ingrese el Legajo y el Sueldo" << endl;

    for (int i = 0; i <3; i++)
    {
        cout << "Legajo N#" << endl;
        cin >> legajo;
        cout << "Sueldo en $" << endl;
        cin >> sueldo;

        if (primeraVez)
        {
            legajoM = legajo;
            sueldoM = sueldo;
            primeraVez = false;
        }
        else
        {
            if( sueldo > sueldoM)
            {
                legajoM = legajo;
                sueldoM = sueldo;
            }
        }
    }
    cout << "Legajo con Mayor sueldo #" << legajoM << endl;
    cout << "Sueldo mayor en $" << sueldoM << endl;



    return 0;
}
