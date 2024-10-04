#include <iostream>
using namespace std;
/*Hacer una funci�n llamada Redondear que reciba como par�metro un n�mero float y devuelva un n�mero entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78, debe devolver 8.
Si recibe 7.48, debe devolver 7.
Si recibe 7.5, debe devolver 8.

Hacer un programa para ingresar un n�mero y, utilizando Redondear, emita luego un cartel indicando el n�mero redondeado.
*/


int Redondear(float numeroF)
{
    //Convierto el float a int para perder los decimales y lo guardo en una variable
    int numero = (int)numeroF;
    //Obtengo el restante de los decimales para compararlo con la mitad para redondear
    float restante = numeroF - numero;
    //Comparo y Redondeo
    if (restante >= 0.5)
        return numero +  1;
    else
        return numero;
}


int main() {

    float ingreso;
    cout << "Ingresa el numero a redondear" << endl;
    cin >> ingreso;
    cout << "El numero redondeado es " << Redondear(ingreso) << endl;

 	return 0;
}
