#pragma once

using namespace std;

void Jugar(int opcion, int& puntajeMasAlto, string& jugadorMejorRankeado);
string AsignarNombre(string& nombre);
int LanzarDado();
int EjecutarRonda(int vDadosBloqueadores[], int NUMERO_BLOQUEADORES, int CANTIDAD_DADOS);
void TirarBloqueadores(int vDadosBloqueadores[], int NUMERO_BLOQUEADORES);
void MostrarDatosRonda(string nombre, int rondaActual, int puntosTotales);
void MostrarBloqueadores(int vDadosBloqueadores[], int NUMERO_BLOQUEADORES);
void ComenzarRonda(int vDadosBloqueadores[], int& puntosRonda);
void TirarDados(int vDadosRonda[], int CANTIDAD_DADOS, bool vDadosBloqueados[]);
void MostrarDados(int vDadosRonda[], int CANTIDAD_DADOS, bool vDadosBloqueados[]);
void BloquearDados(int vDadosRonda[], int CANTIDAD_DADOS, int vDadosBloqueadores[], int NUMERO_BLOQUEADORES, bool vDadosBloqueados[]);
void SumarTirada(int vDadosRonda[], int CANTIDAD_DADOS, bool vDadosBloqueados[], int& puntosTirada);
bool CalcularDoble(int vDadosRonda[], int CANTIDAD_DADOS, bool vDadosBloqueados[], int& puntosTirada);
int SumarRonda(int puntosTirada, int& puntosRonda);
void MostrarResultadosTirada(int puntosTirada, bool esDoble);
void MostrarAcumuladoRonda(int puntosRonda, bool esDoble);
bool PreguntarNuevaTirada(bool posicionDadosBloqueados[], int CANTIDAD_DADOS, bool esDoble);
void MostrarResultadosRonda(string nombreJugador,int CANTIDAD_RONDAS, int rondaActual, int puntosRonda[], int puntajeTotal);
void VerficarEstadisticas(int puntosJugador, string nombreJugador,int& puntajeMasAlto, string& jugadorMejorRankeado, int& puntajeGanador, string& ganador, bool& nuevoRecord);
void MostrarGanador(int puntajeGanador, string ganador, bool nuevoRecord);
