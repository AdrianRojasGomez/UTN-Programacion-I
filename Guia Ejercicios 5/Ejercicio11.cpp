#include <iostream>
using namespace std;

/*Una terminal de pago dispone de la informaci�n de los cupones de las transacciones realizadas en el �ltimo mes. Por cada cup�n se registra:
N�mero de lote (entero)
N�mero de cup�n (entero)
Tipo de transacci�n ('P' - Pago | 'D' - Devoluci�n)
Importe
La informaci�n est� agrupada por n�mero de lote. Para indicar que finaliza un lote y comienza otro se ingresa un n�mero de cup�n igual a cero. Para indicar que se finaliza la carga de datos se ingresa un n�mero de lote igual a cero.
Se pide calcular e informar:
Reportar las estad�sticas de cada lote con el siguiente formato:
LOTE: XXXX
Cantidad de transacciones: XX
Cantidad de pagos: XX
Cantidad de devoluciones: XX
Total de pagos: $ XXXXX
Total de devoluciones: $ XXXXX


La cantidad de lotes que no registraron devoluciones.
El n�mero de lote que haya registrado la mayor cantidad de transacciones (s�lo habr� un lote con la mayor cantidad)
La cantidad total de devoluciones registradas entre todos los lotes.
*/



int main()
{
    int numLote, numCupon;
    char tipoTransaccion;
    float importe;

    //A)Reportar las estad�sticas de cada lote con el siguiente formato:
    int contadorPagos, contadorDevoluciones, totalPagosPorLote, totalDevolucionesPorLote;
    //B) La cantidad de lotes que no registraron devoluciones
    int contadorSinDevoluciones = 0;
    bool devoluciones;

    //C)El n�mero de lote que haya registrado la mayor cantidad de transacciones (s�lo habr� un lote con la mayor cantidad)
    int loteMayor = 0, numMayorTransacciones = 0, numTransacciones;
    bool primerLote = true;

    //D)La cantidad total de devoluciones registradas entre todos los lotes
    int contadorDevolucionesTotal = 0;





    cout << "Ingrese el numero de Lote" << endl;
    cin >> numLote;

    while (numLote != 0)
    {

        devoluciones = false;
        numTransacciones = 0;
        contadorPagos = contadorDevoluciones = totalDevolucionesPorLote = totalPagosPorLote = 0;

        do
        {
            cout << "Ingrese el tipo de Transaccion: 'P' - Pago | 'D' - Devoluci�n" << endl;
            cin >> tipoTransaccion;
            cout << "Ingrese el importe de la transaccion" << endl;
            cin >> importe;
            cout << "Ingrese el numero de cupon" << endl;
            cin >> numCupon;

            numTransacciones++;

            switch(tipoTransaccion)
            {
            case('P'):
                contadorPagos++;
                totalPagosPorLote += importe;
                break;
            case ('D'):
                contadorDevoluciones++;
                contadorDevolucionesTotal++;
                totalDevolucionesPorLote += importe;
                devoluciones = true;
                break;
            default:
                cout << "Transaccion Incorrecta" << endl;
                break;
            }

        }
        while (numCupon != 0);


        //A)Reportar las estad�sticas de cada lote con el siguiente formato:
        cout << "--------------------------------------" << '\n';
        cout << "-  LOTE: " << numLote << endl;
        cout << "-  CANTIDAD TRANSACCIONES: " << numTransacciones << endl;
        cout << "-  CANTIDAD PAGOS: " << contadorPagos << endl;
        cout << "-  CANTIDAD DEVOLUCIONES: " << contadorDevoluciones << endl;
        cout << "-  TOTAL PAGOS: " << totalPagosPorLote << endl;
        cout << "-  TOTAL DEVOLUCIONES: " << totalDevolucionesPorLote << endl;
        cout << "--------------------------------------"<< '\n';


        if(!devoluciones)
        {
            contadorSinDevoluciones++;
        }

        if (primerLote)
        {
            primerLote = false;
            loteMayor = numLote;
            numMayorTransacciones = numTransacciones;
        }
        else if(numTransacciones > numMayorTransacciones)
        {
            loteMayor = numLote;
            numMayorTransacciones = numTransacciones;
        }

        cout << "Ingrese el numero de Lote o 0 para salir" << endl;
        cin >> numLote;


    }

    cout << "Hubo un total de " << contadorDevoluciones << " devoluciones" << endl;
    cout << "La cantidad de lotes que no registro devoluciones fue de " << contadorDevolucionesTotal << "."<< endl;
    cout << "El lote con mayor cantidad de transacciones fue el " << loteMayor << endl;





    return 0;
}
