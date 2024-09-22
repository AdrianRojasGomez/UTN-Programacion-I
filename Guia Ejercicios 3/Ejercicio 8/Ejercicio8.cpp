#include <iostream>
using namespace std;

//Hacer un programa para ingresar una lista de 10 números, luego informar el porcentaje de positivos, negativos, y  ceros.

int main()
{

    int valor = 0;;
    int contadorPositivo = 0;
    int contadorNegativos = 0;
    int contadorCero = 0;

    int porcentajePositivo, porcentajeNegativo, porcentajeCero = 0;


    for (int i = 0; i < 10; i++)
    {
        cin >> valor;
        if (valor > 0)
            contadorPositivo++;
        else if (valor == 0)
            contadorCero++;
        else
            contadorNegativos++;
    }

    cout << "Hay " << contadorPositivo << " numeros positivos" << endl;
    cout << "Hay " << contadorNegativos << " numeros negativos" << endl;
    cout << "Hay " << contadorCero  << " numeros cero" << endl;


    porcentajePositivo = (contadorPositivo * 100) * 0.1;
    porcentajeNegativo = (contadorNegativos * 100) * 0.1;
    porcentajeCero = (contadorCero * 100) * 0.1;

    cout << "El porcentaje positivo es de " << porcentajePositivo << " %." << endl;
    cout << "El porcentaje negativo es de " << porcentajeNegativo << " %." << endl;
    cout << "El porcentaje ceros es de " << porcentajeCero << " %." << endl;


    return 0;
}
