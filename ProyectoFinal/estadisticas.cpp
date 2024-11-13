#include <iostream>
#include "estadisticas.h"
#include "rlutil.h"

using namespace std;


void MostrarEstadisticas(int puntajeMasAlto, string jugadorMejorRankeado)
{
    system("cls");
    rlutil::setColor(11);
    if(puntajeMasAlto == 0)
    {
    rlutil::locate(40, 10);
    cout << "--------------------------------------" << endl;
    rlutil::locate(40, 11);
    cout << "      NO HAY PARTIDAS REGISTRADAS    " << endl;
    rlutil::locate(40, 12);
    cout << "                                    " << endl;
    rlutil::locate(40, 13);
    cout << "--------------------------------------" << endl;
    cin.ignore();
    cin.get();
    }
    else
    {
    rlutil::locate(40, 10);
    cout << "--------------------------------------" << endl;
    rlutil::locate(40, 11);
    cout << "           MEJOR PUNTUACION          " << endl;
    rlutil::locate(40, 12);
    cout << "                                    " << endl;
    rlutil::locate(40, 13);
    cout << "     NOMBRE:     "<< jugadorMejorRankeado << "                      " << endl;
    rlutil::locate(40, 14);
    cout << "     PUNTUACION: " << puntajeMasAlto << "                      " << endl;
    rlutil::locate(40, 15);
    cout << "                                    " << endl;
    rlutil::locate(40, 16);
    cout << "--------------------------------------" << endl;

    rlutil::locate(40, 18);
    cout << "Presiona Enter para Continuar!" << endl;
    cin.ignore();
    cin.get();
    }
    rlutil::setColor(15);
}


