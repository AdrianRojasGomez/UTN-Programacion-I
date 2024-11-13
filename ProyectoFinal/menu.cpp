#include <iostream>
#include "menu.h"
#include "juego.h"
#include "estadisticas.h"
#include "rlutil.h"

using namespace std;

void InicializarMenu()
{
    int puntajeMasAlto = 0;
    string jugadorMejorRankeado = "";
    EjecutarMenu(puntajeMasAlto, jugadorMejorRankeado);
}

void EjecutarMenu(int& puntajeMasAlto, string& jugadorMejorRankeado)
{
    int opcion = -1;
    MostrarMenu(opcion);
    EjecutarOpcion(opcion, puntajeMasAlto, jugadorMejorRankeado);
}

void MostrarTitulo()
{
    rlutil::setColor(14);
    rlutil::locate(30, 5);
    cout << "    .oooooo.    ooooooooo.   oooooooooooo oooooooooooo oooooooooo.            " << endl;
    rlutil::locate(30, 6);
    cout << "   d8P'  `Y8b   `888   `Y88. `888'     `8 `888'     `8 `888'   `Y8b           " << endl;
    rlutil::locate(30, 7);
    cout << " 888            888   .d88'  888          888          888      888           " << endl;
    rlutil::locate(30, 8);
    cout << " 888            888ooo88P'   888oooo8     888oooo8     888      888           " << endl;
    rlutil::locate(30, 9);
    cout << " 888     ooooo  888`88b.     888    \"     888    \"     888      888           " << endl;
    rlutil::locate(30, 10);
    cout << " `88.    .88'   888  `88b.   888       o  888       o  888     d88'           " << endl;
    rlutil::locate(30, 11);
    cout << "  `Y8bood8P'   o888o  o888o o888ooooood8 o888ooooood8 o888bood8P'             " << endl;
}

void MostrarMenu(int& opcion)
{
    do
    {
        system("cls");
        MostrarTitulo();
        //cout << "         GREED" << endl;
        rlutil::setColor(7);
        rlutil::locate(50, 13);
        cout << "-----------------------" << endl;
        rlutil::setColor(9);
        rlutil::locate(50, 14);
        cout << "1 - MODO UN JUGADOR" << endl;
        rlutil::setColor(10);
        rlutil::locate(50, 15);
        cout << "2 - MODO DOS JUGADORES" << endl;
        rlutil::setColor(11);
        rlutil::locate(50, 16);
        cout << "3 - ESTADISTICAS " << endl;
        rlutil::setColor(12);
        rlutil::locate(50, 17);
        cout << "4 - CREDITOS" << endl;
        rlutil::setColor(7);
        rlutil::locate(50, 18);
        cout << "-----------------------" << endl;
        rlutil::setColor(14);
        rlutil::locate(50, 19);
        cout << "0 - SALIR" << endl;
        rlutil::setColor(15);
        rlutil::locate(50, 20);
        cin >> opcion;

        if (opcion > 4 || opcion < 0)
        {
            rlutil::setColor(14);
            rlutil::locate(50, 21);
            cout << "Ingrese una opcion valida.";
            rlutil::locate(50, 22);
            cout << "Presione Enter para intentarlo de nuevo";
            cin.ignore();
            cin.get();
        }
        rlutil::setColor(15);
    }
    while (opcion > 4 || opcion < 0);

    return;

}

void EjecutarOpcion(int opcion, int& puntajeMasAlto, string& jugadorMejorRankeado)
{
    int reiniciar = -1;
    do
    {
        reiniciar = -1;
        switch(opcion)
        {
        case 0:
            rlutil::setColor(14);
            rlutil::locate(50, 21);
            cout << "Gracias por jugar Greed!";
            rlutil::setColor(15);
            exit(0);
            break;
        case 1:
            Jugar(1, puntajeMasAlto, jugadorMejorRankeado);
            break;
        case 2:
            Jugar(2,puntajeMasAlto, jugadorMejorRankeado);
            break;
        case 3:
            MostrarEstadisticas(puntajeMasAlto, jugadorMejorRankeado);
            break;
        case 4:
            MostrarCreditos();
            break;
        default :
            break;
        }
        if (opcion == 1 || opcion == 2)
        {
            ConsultarReinicio(reiniciar);
        }
    }
    while (reiniciar == 1);
    EjecutarMenu(puntajeMasAlto, jugadorMejorRankeado);

}

void ConsultarReinicio(int& reiniciar)
{
    while (reiniciar != 0 && reiniciar != 1)
    {
        rlutil::locate(45, 20);
        cout << "Quieres volver a jugar?" << endl << endl;
        rlutil::locate(45, 22);
        cout << "Presione 1 para reiniciar" << endl;
        rlutil::locate(45, 23);
        cout << "Presione 0 para salir al Menu Principal" << endl;
        rlutil::locate(45, 24);
        cin >> reiniciar;
    }

    if(reiniciar == 0 )
        system("cls");
    else if (reiniciar == 1)
    {
        system("cls");
        MostrarTitulo();
    }
}

void MostrarCreditos()
{
    system("cls");
    rlutil::setColor(12);
    rlutil::locate(45, 10);
    cout << "                 CREDITOS PARA:                 " << endl;
    rlutil::locate(45, 11);
    cout << "       EQUIPO WONDERFUL KIDS DE MARACAY         " << endl;
    rlutil::locate(45, 12);
    cout << "         JESUS CASTILLO LEGAJO: 32063           " << endl;
    rlutil::locate(45, 13);
    cout << "          ADRIAN ROJAS LEGAJO: 31912            " << endl;
    rlutil::setColor(15);
    rlutil::anykey();
}
