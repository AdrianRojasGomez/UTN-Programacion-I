#include <iostream>
using namespace std;

/*Hacer una funci�n que reciba un n�mero entero por valor llamado d�a
 y un string llamado nombre por referencia y le asigne el nombre correspondiente seg�n el n�mero de d�a. Siendo 0  Domingo y 6  S�bado.*/


void Semana(int dia, string& nombre)
{
    switch(dia)
    {
    case (0):
        nombre = "Domingo";
        break;
    case (1):
        nombre = "Lunes";
        break;
    case (2):
        nombre = "Martes";
        break;
    case (3):
        nombre = "Miercoles";
        break;
    case (4):
        nombre = "Jueves";
        break;
    case (5):
        nombre = "Viernes";
        break;
    case (6):
        nombre = "Sabado";
        break;
    default:
        cout << "Dia incorrecto";
        break;
    }

}
int main()
{

    int dia = -1;
    string nombre = "";

    cout << "Ingresa el numero del dia, del 0 al 6"<< endl;
    cin >> dia;
    Semana(dia, nombre);
    cout << nombre << endl;

    return 0;
}
