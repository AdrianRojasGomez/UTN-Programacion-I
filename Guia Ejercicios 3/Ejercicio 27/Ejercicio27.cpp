#include <iostream>
using namespace std;

Número de día (entero)
Temperatura (float)
Milímetros de lluvia (float)
Visibilidad en km (float)

Hay un registro por cada día. La información se encuentra ordenada por día. Se pide calcular e informar:
El número del día que se haya registrado la temperatura máxima.
La amplitud térmica de todo el período.
La cantidad de días con neblina.
Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia. Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días. De lo contrario mostrar "Quincena seca".

NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.
*/

int main()
{

    //Variables de Control
    bool primerDia = true;
    int diasNeblina = 0, diasLluvia = 0, diasSecos = 0, diaMaxTemp = 0;
    float tempMin = 0, tempMax = 0, ampTermica = 0;

    //Variables de input
    int numDia = 0;
    float temperatura = 0, mmLluvia = 0, kmVisibilidad = 0;



    cout << "Ingrese los datos pedidos para realizar los calculos" << endl;

    for (int i = 0; i < 15; i++)
    {
        cout << "Ingrese el numero del dia" << endl;
        cin >> numDia;
        cout << "Ingrese la temperatura del dia" << endl;
        cin >> temperatura;
        cout << "Ingrese los mm de Lluvia" << endl;
        cin >> mmLluvia;
        cout << "Ingrese los km de visibilidad" << endl;
        cin >> kmVisibilidad;
        cout << "---------------------------------" << endl;

        if (primerDia)
        {
            tempMax = temperatura;
            tempMin = temperatura;
            diaMaxTemp = numDia;
            primerDia = false;
        }

        if (temperatura > tempMax)
        {
            tempMax = temperatura;
            diaMaxTemp = numDia;
        }
        if (temperatura < tempMin)
        {
            tempMin = temperatura;
        }

        if (kmVisibilidad < 2)
            diasNeblina++;

        if (mmLluvia > 0)
            diasLluvia++;
        else
            diasSecos++;

    }

    ampTermica = tempMax - tempMin;

    cout << "Dia con Mayor Temperatura" << diaMaxTemp << "." << endl;
    cout << "Amplitud Termica de la quincena" << ampTermica << "." << endl;
    cout << "Dias con Neblina" << diasNeblina << "." << endl;

    if (diasLluvia > diasSecos)
        cout << "Quincena Lluviosa" << endl;
    if (diasLluvia >= 5)
        cout << "Quincena Humeda" << endl;
    else
        cout << "Quincena Seca" << endl;


    return 0;
}
