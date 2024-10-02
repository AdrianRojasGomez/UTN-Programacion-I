#include <iostream>
using namespace std;
/*
Un restaurant registró la información de todas las comandas atendidas la noche anterior por sus mozos. Por cada comanda se registró:
Número de comanda
Número de mozo (entero)
Tipo de plato (1 - Entrada, 2 - Plato Principal, 3 - Postre)
Importe (float)

La información se encuentra agrupada por Número de mozo. Cada mozo atendió diez comandas. Para indicar el fin de la carga de datos se registra un Número de mozo negativo.

Calcular e informar:
1 - Por cada mozo, la cantidad de platos de cada tipo.
2 - El número de mozo que haya atendido el Plato Principal de menor importe.
3 - El importe promedio por comanda (entre todas las comandas).

NOTA: Una comanda es un servicio de mesa (pedido) atendido por un mozo en un restaurant.
*/

int main()
{

    int numComanda, numMozo, tipoPlato;
    float importe;

    //A)Por cada mozo, la cantidad de platos de cada tipo.
    int contadorPlato1, contadorPlato2, contadorPlato3;

    //B)El número de mozo que haya atendido el Plato Principal de menor importe.
    int mozoMenorImporte;
    bool primerMozo = true;
    float menorImporte;

    //C)El importe promedio por comanda (entre todas las comandas)
    int totalImporte = 0, totalComandas = 0;

    cout << "Ingrese el numero de Mozo" << endl;
    cin >> numMozo;

    while (numMozo > 0)
    {
        contadorPlato1 = contadorPlato2 = contadorPlato3 = 0;

        for (int i = 1; i <=10; i++)
        {

            cout << "Ingrese el numero de comanda" << endl;
            cin >> numComanda;
            cout << "Ingrese el tipo de plato: (1 - Entrada, 2 - Plato Principal, 3 - Postre)" << endl;
            cin >> tipoPlato;
            cout << "Ingrese el importe" << endl;
            cin >> importe;

            //A)
            switch(tipoPlato)
            {
            case(1):
                contadorPlato1++;
                break;
            case(2):
                contadorPlato2++;
                break;
            case(3):
                contadorPlato3++;
                break;
            default:
                cout << "Error en contador de platos" << endl;
                break;
            }

            //B)
            if(primerMozo && tipoPlato == 1)
            {
                primerMozo = false;
                mozoMenorImporte = numMozo;
                menorImporte = importe;
            }
            else if (importe < menorImporte && tipoPlato == 1)
            {
                mozoMenorImporte = numMozo;
                menorImporte = importe;
            }

            //D)
            totalComandas++;
            totalImporte += importe;

        }

        //A)
        cout << "El Mozo N" << numMozo << " vendio:" << endl;
        cout << contadorPlato1 << " Platos de Entrada" << endl;
        cout << contadorPlato2 << " Platos Principales" << endl;
        cout << contadorPlato3 << " Platos de Postre" << endl;


    }

    cout << "El numero de mozo que atendio el plato principal de menor importe fue " << mozoMenorImporte << " con un importe de " << menorImporte << "." << endl;
    cout << "El importe promedio por comanda es de " << totalImporte/totalComandas << endl;


    return 0;
}
