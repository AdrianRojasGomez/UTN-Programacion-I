#include <iostream>
using namespace std;
/*Hacer una función llamada Redondear que reciba como parámetro un número float y devuelva un número entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78, debe devolver 8.
Si recibe 7.48, debe devolver 7.
Si recibe 7.5, debe devolver 8.

Hacer un programa para ingresar un número y, utilizando Redondear, emita luego un cartel indicando el número redondeado.
*/

int Redondear(float numeroF)

{
    bool esNegativo = false;
    //Valido si es negativo y lo cambio
    if (numeroF < 0)
    {
        esNegativo = true;
        numeroF *= -1;
    }

    //Convierto el float a int para perder los decimales y lo guardo en una variable
    int numero = (int)numeroF;
    //Obtengo el restante de los decimales para compararlo con la mitad para redondear
    float restante = numeroF - numero;
    //Comparo y Redondeo
    if (restante >= 0.5)
        numero +=  1;

    // Verifico la bandera  EsNegativo y le devuelvo el simbolo si lo tuviese
    if (esNegativo)
        return numero *= -1;
    else
        return numero;

}


int main()
{

    float ingreso, resultado;
    cout << "Ingresa el numero a redondear" << endl;
    cin >> ingreso;
    resultado =  Redondear(ingreso);
    cout << "El numero redondeado es " << resultado << endl;

    return 0;
}
