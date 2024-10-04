#include <iostream>
using namespace std;

/*Escribir una función que reciba el valor de un año y retorne 1 si el mismo es bisiesto y 0 si es un año no bisiesto. Recordar que son años bisiestos los divisibles por 4, excepto los divisibles por 100, pero dentro de este grupo se incluyen los divisibles por 400. Por ejemplo 1992 fue bisiesto por ser divisible por 4. El año 1900 no fue bisiesto por ser divisible por 100, aun siendo divisible por 4. Y el año 2000 fue bisiesto por ser divisible por 400, aun siendo divisible por 100.
Hacer un programa para ingresar una lista de 10 valores de años y contar cuantos son bisiestos. Utilizar la función solicitada.
*/

int AnioBisiesto (int anio)
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

    if(esBisiesto)
        return 1;
    else
        return 0;
}


int main()
{
    int anio = 0, contadorBisiesto = 0;

    cout << "Ingresa 10 años para calcular si son bisiestos" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> anio;
        if(AnioBisiesto(anio) == 1)
            contadorBisiesto++;
    }

    cout << "Hay " << contadorBisiesto << " años bisiestos en la lista" << endl;




    return 0;
}
