#include <iostream>
using namespace std;
/*
Hacer una función que reciba un código de naipe (del 1 al 40) y determine el número y el palo de la baraja española de 40 cartas (sin los 8, 9 y comodines del mazo). La función debe recibir por referencia el número de naipe y el nombre del palo (para ser completados por la función) y por valor el código de naipe.

Tener en cuenta que:
Los códigos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del 21 al 30 y oro del 31 al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas.
*/

void AsignarNumeroDeBaraja (int ID, int& numeroBaraja)
{
    if (ID >= 8 && ID <= 10)
        numeroBaraja = ID + 2;
    else
        numeroBaraja = ID;
}

int BuscarNaipe (int ID, string& palo)
{
    int numeroBaraja =0;

    if(ID < 1 || ID > 40)
    {
        cout << "Carta Invalida" << endl;
        palo = "Invalid";
        return 0;
    }

    if(ID >= 1 && ID <= 10)
    {
        palo = "Espadas";
        AsignarNumeroDeBaraja(ID, numeroBaraja);
    }
    else if (ID >= 11 && ID <= 20)
    {
        palo = "Basto";
        ID = ID - 10;
        AsignarNumeroDeBaraja(ID, numeroBaraja);
    }
    else if (ID >= 21 && ID <= 30)
    {
        palo = "Copa";
        ID = ID - 20;
        AsignarNumeroDeBaraja(ID, numeroBaraja);
    }
    else
    {
        palo = "Oro";
        ID = ID - 30;
        AsignarNumeroDeBaraja(ID, numeroBaraja);
    }

    return numeroBaraja;

}

int main()
{

    int ID = -1, numeroNaipe = -1;
    string palo = "";

    do
    {
        cout << "Ingrese el ID del Naipe" << endl;
        cin >> ID;

        numeroNaipe = BuscarNaipe(ID, palo);

        cout << "El naipe es el " << numeroNaipe << " de " << palo << endl;
    }
    while (ID != 0)





        return 0;
}
