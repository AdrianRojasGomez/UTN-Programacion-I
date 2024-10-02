#include <iostream>
using namespace std;

/*Se dispone de una lista de 10 grupos de números y cada uno de los grupos estará compuesto por 5 números. Se pide determinar e informar:
Para cada uno de los 10 grupos la cantidad de números positivos, negativos y ceros que lo componen. Se informan 3 resultados para cada uno de los 10 grupos.
Para cada uno de los 10 grupos el último número primo y en qué orden apareció en ese grupo, si en un grupo no hubiera números primos informar con un cartel aclaratorio.
Informar cuántos números impares hay en total entre los 10 grupos. Se informa un resultado al final de todo.
*/

int main()
{
    //A) Para cada uno de los 10 grupos la cantidad de números positivos, negativos y ceros que lo compone
    int cantidadPositivos, cantidadNegativos, cantidadCeros;
    //B)Para cada uno de los 10 grupos el último número primo y en qué orden apareció en ese grupo,
    int ultimoPrimo, posicionUltimoPrimo, div;
    //C) Informar cuántos números impares hay en total entre los 10 grupos. Se informa un resultado al final de todo.
    int contadorImpares;

    int ingreso;

    contadorImpares = 0;
    for (int i = 1; i <= 4; i++)
    {
        cantidadCeros = cantidadNegativos = cantidadPositivos = 0;
        ultimoPrimo = posicionUltimoPrimo = 0;

        for (int j = 1; j <=5; j++)
        {
            cout << "Este es el grupo " << i << ". Ingrese el numero en la posicion " << j << "°" << endl;
            cin >> ingreso;

            if(ingreso == 0)
                cantidadCeros++;
            else if (ingreso < 0)
                cantidadNegativos++;
            else
                cantidadPositivos++;
            div = 2;
            while (ingreso % div != 0 && ingreso > 1)
            {
                div++;
            }
            if (ingreso == div)
            {
                ultimoPrimo = ingreso;
                posicionUltimoPrimo = j;
            }

            if(ingreso % 2 == 1 || ingreso % 2 == -1)
                contadorImpares++;
        }

        //A) Para cada uno de los 10 grupos la cantidad de números positivos, negativos y ceros que lo compone
        cout << "Se ingresaron " <<  cantidadPositivos << " Positivos." << endl;
        cout << "Se ingresaron " <<  cantidadNegativos << " Negativos." << endl;
        cout << "Se ingresaron " <<  cantidadCeros << " Ceros." << endl;
        //B) Para cada uno de los 10 grupos el último número primo y en qué orden apareció en ese grupo
        if (ultimoPrimo == 0 && posicionUltimoPrimo == 0)
        {
            cout << "En este grupo no se ingresaron numeros primos" << endl;
        }
        else
        {
            cout << "El ultimo primo fue " << ultimoPrimo << " En la posicion " << posicionUltimoPrimo << endl;
        }

    }
        //C) Informar cuántos números impares hay en total entre los 10 grupos. Se informa un resultado al final de todo.
        cout << "Hubo en total " << contadorImpares << " numeros impares" << endl;



    return 0;
}
