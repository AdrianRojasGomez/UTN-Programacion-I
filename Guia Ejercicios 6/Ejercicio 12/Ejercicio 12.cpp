#include <iostream>
using namespace std;

/*Escribir una función de nombre validarFecha que reciba 3 valores correspondientes al día, mes y año, y devuelva 1 si los valores recibidos corresponden a una fecha correcta o 0 si no es correcta. Por ejemplo, si la función recibe 30, 2, 2000 deberá devolver 0; y si recibe 12, 2, 1990, deberá devolver 1.*/

bool AnioBisiesto (int anio)
{
    bool esBisiesto = false;

    if(anio % 4 == 0)
    {
        if (anio % 100 != 0)
            esBisiesto = true;
        else
        {
            if (anio % 400 == 0)
                esBisiesto = true;
            else
                esBisiesto = false;
        }
    }
    else
        esBisiesto = false;
    return esBisiesto;
}


int ValidarFecha(int dia, int mes, int anio)
{
    //Chequea negativos
    if (anio < 0 || dia < 0 || mes < 0)
        return 0;
    // Chequea Dias y Meses Invalidos
    if (mes > 12 ||dia > 31 )
        return 0;

    bool esBisiesto = false;

    if ((mes == 4 || mes == 5 || mes == 6 || mes == 9 || mes == 11) && dia > 30)
        return 0;

    else if (mes == 2)
    {
        esBisiesto = AnioBisiesto(anio);
        if (esBisiesto)
        {
            if (dia > 30)
                return 0;
            else if (dia > 29)
                return 0;
        }
    }
    return 1;
}

int main()
{
    int dia, mes, anio;
    cout << "Ingrese el dia, el mes y el año en orden para validar si la fecha existe" << endl;
    cin >> dia;
    cin >> mes;
    cin >> anio;
    cout << ValidarFecha(dia,mes,anio);
    return 0;
}
