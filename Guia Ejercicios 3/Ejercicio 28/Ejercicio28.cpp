#include <iostream>
using namespace std;

/*La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos durante la semana pasada. Por cada movimiento se registró:
Número de movimiento
Día
opcion ('E' - Extracción / 'D' - Depósito)
Importe

Existe un registro por movimiento. Se desea calcular e informar:
El saldo final de la cuenta.
El porcentaje de movimientos de extracción y el porcentaje de depósito.
El depósito de mayor importe indicando también día y número de movimiento.
La cantidad de movimientos del día 10.
*/

int main()
{

    //variables de control
    int const MTOTALES = 14;
    int numMovimiento = 0, movimientosDiaDiez = 0, contadorDeposito = 0, contadorRetiro = 0, total = 0;
    int diaDepositoMayor = 0, numMovDepositoMayor = 0, depositoMayor = 0;
    bool primerDeposito = true, invalid = false;

    //variables de input
    int dia = 0, importe = 0;
    char opcion;

    cout << "Ingrese los datos de sus ultimos 14 movimientos a continuacion" << endl;

    for (int i = 1; i <= MTOTALES; i++)
    {
        numMovimiento = i;

        cout << "--------------------------------------------------------------" << endl;
        cout << "Ingresa el dia del movimiento " << i << ":"<< endl;
        cin >> dia;
        cout << "Ingresa opcion de movimiento: 'D' para deposito o 'E' para extraccion" << endl;
        cin >> opcion;
        cout << "Ingresa el importe del movimiento" << endl;
        cin >> importe;
        cout << "--------------------------------------------------------------" << endl;

        switch(opcion)
        {
        case 'D':
            if (primerDeposito)
            {
                depositoMayor = importe;
                diaDepositoMayor = dia;
                numMovDepositoMayor = i;
                primerDeposito = false;
            }
            if (importe > depositoMayor)
            {
                depositoMayor = importe;
                diaDepositoMayor = dia;
                numMovDepositoMayor = i;
            }
            total += importe;
            contadorDeposito++;

            break;
        case 'E':
        {
            total -= importe;
            contadorRetiro++;
        }
        break;
        default:
            cout << "transaccion Invalida" << endl;
            break;
        }
        if (dia == 10)
            movimientosDiaDiez++;
    }

    int porcentajeDeposito = (contadorDeposito * 100)/ MTOTALES;
    int porcentajeRetiro = (contadorRetiro * 100)/ MTOTALES;

    cout << "Saldo Final $" << total << endl;
    cout << "Porcentaje Movimientos Extraccion " << porcentajeRetiro <<"%" << endl;
    cout << "Porcentaje Movimientos Deposito " << porcentajeRetiro << "%"<<endl;
    cout << "El deposito mayor fue de $" << depositoMayor << "el dia " << diaDepositoMayor << "En el movimiento " <<  numMovDepositoMayor <<   endl;
    cout << "Cantidad de movimientos en el dia 10 :" << movimientosDiaDiez << endl;



    return 0;
}
