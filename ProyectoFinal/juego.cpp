#include <iostream>
#include "juego.h"
#include "rlutil.h"

using namespace std;

void Jugar(int opcion, int& puntajeMasAlto, string& jugadorMejorRankeado)
{
    const int NUMERO_BLOQUEADORES = 2;
    const int CANTIDAD_DADOS = 5;
    const int CANTIDAD_RONDAS = 3;
    int vDadosBloqueadores[NUMERO_BLOQUEADORES] {};

    string nombreJugador1 = "";
    string nombreJugador2 = "";
    int puntosTotalesJugador1 = 0;
    int puntosTotalesJugador2 = 0;
    int vPuntosRondaJugador1[CANTIDAD_RONDAS] {};
    int vPuntosRondaJugador2[CANTIDAD_RONDAS] {};
    int puntajeGanador = 0;
    string ganador = "";
    bool nuevoRecord = false;


    switch(opcion)
    {
    case 1:
        rlutil::setColor(9);
        rlutil::locate(50, 22);
        AsignarNombre(nombreJugador1);

        for (int rondaActual = 0; rondaActual < CANTIDAD_RONDAS; rondaActual++)
        {
            ///JUGADOR 1
            TirarBloqueadores(vDadosBloqueadores, NUMERO_BLOQUEADORES);
            MostrarDatosRonda(nombreJugador1, rondaActual, puntosTotalesJugador1);
            MostrarBloqueadores(vDadosBloqueadores, NUMERO_BLOQUEADORES);
            vPuntosRondaJugador1[rondaActual] = EjecutarRonda(vDadosBloqueadores,NUMERO_BLOQUEADORES,CANTIDAD_DADOS);
            puntosTotalesJugador1 += vPuntosRondaJugador1[rondaActual];
            MostrarResultadosRonda(nombreJugador1,CANTIDAD_RONDAS, rondaActual, vPuntosRondaJugador1, puntosTotalesJugador1);
        }
        VerficarEstadisticas(puntosTotalesJugador1, nombreJugador1, puntajeMasAlto, jugadorMejorRankeado, puntajeGanador, ganador, nuevoRecord);
        MostrarGanador(puntajeGanador, ganador, nuevoRecord);
        rlutil::setColor(15);
        break;
    case 2:
        rlutil::setColor(10);
        rlutil::locate(50, 22);
        AsignarNombre(nombreJugador1);
        rlutil::locate(50, 24);
        AsignarNombre(nombreJugador2);

        for (int rondaActual = 0; rondaActual < CANTIDAD_RONDAS; rondaActual++)
        {
            ///JUGADOR 1
            TirarBloqueadores(vDadosBloqueadores, NUMERO_BLOQUEADORES);
            MostrarDatosRonda(nombreJugador1, rondaActual, puntosTotalesJugador1);
            MostrarBloqueadores(vDadosBloqueadores, NUMERO_BLOQUEADORES);
            vPuntosRondaJugador1[rondaActual] = EjecutarRonda(vDadosBloqueadores,NUMERO_BLOQUEADORES,CANTIDAD_DADOS);
            puntosTotalesJugador1 += vPuntosRondaJugador1[rondaActual];
            MostrarResultadosRonda(nombreJugador1,CANTIDAD_RONDAS, rondaActual, vPuntosRondaJugador1, puntosTotalesJugador1);

            ///JUGADOR2
            TirarBloqueadores(vDadosBloqueadores, NUMERO_BLOQUEADORES);
            MostrarDatosRonda(nombreJugador2, rondaActual, puntosTotalesJugador2);
            MostrarBloqueadores(vDadosBloqueadores, NUMERO_BLOQUEADORES);
            vPuntosRondaJugador2[rondaActual] = EjecutarRonda(vDadosBloqueadores,NUMERO_BLOQUEADORES,CANTIDAD_DADOS);
            puntosTotalesJugador2 += vPuntosRondaJugador2[rondaActual];
            MostrarResultadosRonda(nombreJugador2,CANTIDAD_RONDAS, rondaActual, vPuntosRondaJugador2, puntosTotalesJugador2);
        }
        VerficarEstadisticas(puntosTotalesJugador1, nombreJugador1, puntajeMasAlto, jugadorMejorRankeado, puntajeGanador, ganador, nuevoRecord);
        VerficarEstadisticas(puntosTotalesJugador2, nombreJugador2, puntajeMasAlto, jugadorMejorRankeado, puntajeGanador, ganador, nuevoRecord);
        MostrarGanador(puntajeGanador, ganador, nuevoRecord);
        rlutil::setColor(15);
        break;
    default:
        cout << "Error en asignacion de menu" << endl;
        break;
    }
}

int EjecutarRonda(int vDadosBloqueadores[], int NUMERO_BLOQUEADORES, int CANTIDAD_DADOS)
{
    int puntosTirada = 0;
    int puntosRonda = 0;
    int vDadosRonda[CANTIDAD_DADOS] {};
    bool vPosicionDadosBloqueados[CANTIDAD_DADOS] {};
    bool eleccionJugador;

    do
    {
        bool esDoble = false;
        eleccionJugador = false;
        puntosTirada = 0;
        TirarDados(vDadosRonda, CANTIDAD_DADOS, vPosicionDadosBloqueados);
        BloquearDados(vDadosRonda, CANTIDAD_DADOS, vDadosBloqueadores, NUMERO_BLOQUEADORES, vPosicionDadosBloqueados);
        SumarTirada(vDadosRonda, CANTIDAD_DADOS, vPosicionDadosBloqueados, puntosTirada);
        esDoble = CalcularDoble(vDadosRonda,CANTIDAD_DADOS,vPosicionDadosBloqueados,puntosTirada);
        MostrarResultadosTirada(puntosTirada, esDoble);
        puntosRonda += SumarRonda(puntosTirada, puntosRonda);
        MostrarAcumuladoRonda(puntosRonda, esDoble);
        eleccionJugador =  PreguntarNuevaTirada(vPosicionDadosBloqueados,CANTIDAD_DADOS, esDoble);
    }
    while (eleccionJugador);

    return puntosRonda;
}

string AsignarNombre(string& nombre)
{
    cout << "Ingrese nombre del Jugador: ";
    cin >> nombre;
    return nombre;
}

int LanzarDado()
{
    return rand() % 6 + 1;
}

void TirarBloqueadores(int vDadosBloqueadores[], int NUMERO_BLOQUEADORES)
{
    for (int i = 0; i < NUMERO_BLOQUEADORES; i++)
        vDadosBloqueadores[i] = LanzarDado();
}

void MostrarDatosRonda(string nombre, int rondaActual, int puntosTotales)
{
    system("cls");
    cout << "Jugador Actual:   " << nombre << endl;
    cout << "Ronda  #" << rondaActual + 1 << endl;
    cout << "Puntos Totales:   " << puntosTotales << endl;

}

void MostrarBloqueadores(int vDadosBloqueadores[], int NUMERO_BLOQUEADORES)
{
    cout << "\nBLOQUEADORES" << endl;
    cout << " ------------------------------" << endl;
    for (int i = 0; i < NUMERO_BLOQUEADORES; i++)
    {
        cout << "|   El bloqueador "<< i+1 << " es el: " << vDadosBloqueadores[i] << "   |" <<  endl;
    }
    cout << " ------------------------------\n" << endl;
}

void TirarDados(int vDadosRonda[], int CANTIDAD_DADOS, bool vPosicionDadosBloqueados[])
{
    for (int i = 0; i < CANTIDAD_DADOS; i++)
        vDadosRonda[i] = LanzarDado();
    MostrarDados(vDadosRonda,CANTIDAD_DADOS,vPosicionDadosBloqueados);
}

void MostrarDados(int vDadosRonda[], int CANTIDAD_DADOS, bool vPosicionDadosBloqueados[])
{
    cout << "DADOS OBTENIDOS: \n";
    for (int i = 0; i < CANTIDAD_DADOS; i++)
    {
        if(!vPosicionDadosBloqueados[i])
            cout << vDadosRonda[i] << " ";
    }
}

void BloquearDados(int vDadosRonda[], int CANTIDAD_DADOS, int vDadosBloqueadores[], int NUMERO_BLOQUEADORES, bool vPosicionDadosBloqueados[])
{
    for (int i = 0; i < CANTIDAD_DADOS; i++)
    {
        for (int j = 0; j < NUMERO_BLOQUEADORES; j++)
        {
            if (vDadosRonda[i] == vDadosBloqueadores[j])
                vPosicionDadosBloqueados[i] = true;
        }
    }
}

void SumarTirada(int vDadosRonda[], int CANTIDAD_DADOS, bool vPosicionDadosBloqueados[], int& puntosTirada)
{
    for (int i = 0; i < CANTIDAD_DADOS; i++)
    {
        if(!vPosicionDadosBloqueados[i])
            puntosTirada += vDadosRonda[i];
    }
}

bool CalcularDoble(int vDadosRonda[], int CANTIDAD_DADOS, bool vPosicionDadosBloqueados[], int& puntosTirada)
{
    int vDadosFinales[CANTIDAD_DADOS] {};
    bool esPrimerDado = true;
    int valor = 0;
    int contadorDeValidos = 1;
    for (int i = 0; i < CANTIDAD_DADOS; i++)
    {
        if(!vPosicionDadosBloqueados[i])
            vDadosFinales[i] = vDadosRonda[i];
    }

    for (int i = 0; i < CANTIDAD_DADOS; i++)
    {
        if(vDadosFinales[i] != 0 && esPrimerDado)
        {
            esPrimerDado = false;
            valor = vDadosFinales[i];
        }
        else if(vDadosFinales[i] != 0 && vDadosFinales[i] != valor)
            return false;
        else if (vDadosFinales[i] != 0 && vDadosFinales[i] == valor)
            contadorDeValidos++;
    }

    if(contadorDeValidos > 1)
    {
        puntosTirada *= 2;
        return true;
    }
    else
        return false;
}

int SumarRonda(int puntosTirada, int& puntosRonda)
{
    if(puntosTirada == 0)
    {
        puntosRonda *= 0;
        return 0;
    }

    return puntosTirada;
}

void MostrarResultadosTirada(int puntosTirada, bool esDoble)
{
    if(esDoble)
    {
        cout << "BONUS! PUNTOS TIRADA X2!!! \n Puntos de la tirada: " << puntosTirada;
    }
    else
    {
        cout << "     Puntos de la tirada: " << puntosTirada;
    }
}

void MostrarAcumuladoRonda(int puntosRonda, bool esDoble)
{
    if(esDoble)
    {
        cout << ", Puntos acumulados en la ronda: " << puntosRonda << endl;
        cout << "\nPresiona Enter para continuar!";
        cin.ignore();
        cin.get();
    }
    else
    {
        cout << ", Puntos acumulados en la ronda: " << puntosRonda << endl;
    }
}

bool PreguntarNuevaTirada(bool posicionDadosBloqueados[], int CANTIDAD_DADOS, bool esDoble)
{
    if(esDoble)
        return true;

    bool noTieneDados = true;

    for(int i = 0; i < CANTIDAD_DADOS; i++)
    {
        if(!posicionDadosBloqueados[i])
        {
            noTieneDados = false;
            break;
        }
    }

    if(noTieneDados)
        return false;

    int eleccionTirada = -1;
    while (eleccionTirada != 1 && eleccionTirada != 0)
    {

        cout << "\nDesea lanzar los dados nuevamente? 1: SI / 0: NO" << endl;
        cin  >> eleccionTirada;

    }
    if(eleccionTirada == 1)
        return true;
    else
        return false;
}

void MostrarResultadosRonda(string nombreJugador,int CANTIDAD_RONDAS, int rondaActual, int vPuntosRonda[], int puntajeTotal)
{
    system("cls");
    rlutil::locate(45, 10);
    cout << "Puntaje del jugador " << nombreJugador << endl;
    rlutil::locate(45, 11);
    cout << " -----------------------------------" << endl;
    rlutil::locate(45, 12);
    cout << " |  RONDA  #1"<< "      Puntos: " << vPuntosRonda[0] <<   "      |" <<  endl;
    rlutil::locate(45, 13);
    cout << " |  RONDA  #2"<< "      Puntos: " << vPuntosRonda[1] <<   "      |" <<  endl;
    rlutil::locate(45, 14);
    cout << " |  RONDA  #3"<< "      Puntos: " << vPuntosRonda[2] <<   "      |" <<  endl;
    rlutil::locate(45, 15);
    cout << " -----------------------------------\n" << endl;
    rlutil::locate(45, 16);
    cout << "Puntaje Total: " << puntajeTotal << "\n\n";

    if (rondaActual == CANTIDAD_RONDAS - 1)
    {
        rlutil::locate(45, 18);
        cout << "TERMINO EL JUEGO!!!" << endl;
        cin.ignore();
        cin.get();
    }
    else
    {
        rlutil::locate(45, 18);
        cout << "Presiona Enter para continuar!";
        cin.ignore();
        cin.get();
    }
}

void VerficarEstadisticas(int puntosJugador, string nombreJugador, int& puntajeMasAlto, string& jugadorMejorRankeado,int& puntajeGanador, string& ganador, bool& nuevoRecord)
{
    if(puntosJugador > puntajeMasAlto)
    {
        nuevoRecord = true;
        puntajeMasAlto = puntosJugador;
        jugadorMejorRankeado = nombreJugador;
        puntajeGanador = puntosJugador;
        ganador = nombreJugador;
    }
    else if(puntosJugador > puntajeGanador)
    {
        puntajeGanador = puntosJugador;
        ganador = nombreJugador;
    }
}

void MostrarGanador(int puntajeGanador, string ganador, bool nuevoRecord)
{
    system("cls");
    if(nuevoRecord)
    {
    rlutil::locate(45, 10);
    cout << "--------------------------------------" << endl;
    rlutil::locate(45, 11);
    cout << "      !!!GANADOR Y NUEVO RECORD!!!         " << endl;
    rlutil::locate(45, 12);
    cout << "                                    " << endl;
    rlutil::locate(45, 13);
    cout << "     NOMBRE:     "<< ganador << "                      " << endl;
    rlutil::locate(45, 14);
    cout << "     PUNTUACION: " << puntajeGanador << "                      " << endl;
    rlutil::locate(45, 15);
    cout << "                                    " << endl;
    rlutil::locate(45, 16);
    cout << "--------------------------------------" << endl;
    }
     else
    {
    rlutil::locate(45, 10);
    cout << "--------------------------------------" << endl;
    rlutil::locate(45, 11);
    cout << "               GANADOR               " << endl;
    rlutil::locate(45, 12);
    cout << "                                    " << endl;
    rlutil::locate(45, 13);
    cout << "     NOMBRE:     "<< ganador << "                      " << endl;
    rlutil::locate(45, 14);
    cout << "     PUNTUACION: " << puntajeGanador << "                      " << endl;
    rlutil::locate(45, 15);
    cout << "                                    " << endl;
    rlutil::locate(45, 16);
    cout << "--------------------------------------" << endl;
    }

    rlutil::locate(45, 18);
    cout << "Presiona Enter para Continuar!" << endl;
    rlutil::anykey();
}
