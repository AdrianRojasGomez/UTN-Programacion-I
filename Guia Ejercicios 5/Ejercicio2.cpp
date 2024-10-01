#include <iostream>
using namespace std;
/*
Un club de lectura desea registrar la informaci�n de los libros que leyeron sus socios en el �ltimo mes. Por cada socio y libro se registr�:
N�mero de socio (entero)
N�mero de libro (entero)
Cantidad de p�ginas del libro (entero)
Tiempo total de lectura en minutos (entero)

La informaci�n est� agrupada por socio. Cada socio pudo haber le�do una cantidad diferente de libros. Para indicar el fin de la carga de datos de un socio se ingresa un n�mero de socio distinto al ingresado previamente. Para indicar el fin de la carga de datos se ingresa un n�mero de socio igual a cero.
*/
int main()
{

    int numSocio = 0;
    int numAnteriorSocio = 0;
    int numLibro, ppLibro, minLectura;

    //A) Por cada socio, la cantidad total de p�ginas le�das.
    int ppLeidasPorSocio;
    //B)Por cada socio, el tiempo promedio total de lectura.
    int minTotalLecturaPorSocio, cantidadLibrosTotales = 0;
    //C) La cantidad de veces que un socio del club ha le�do un libro de m�s de 500 p�ginas.
    int socioQuinientos = 0;
    //D)El tiempo total de lectura entre todos los socios.
    int totalLectura = 0;
    //E) El socio que m�s libros haya le�do.
    int granLector, cantidadLibrosPorSocio;
    bool primerLector = true;


    cout << "Ingrese el Numero del Socio" << endl;
    cin >> numSocio;

    while (numSocio != 0)
    {
        numAnteriorSocio = numSocio;
        ppLeidasPorSocio = 0;
        minTotalLecturaPorSocio = 0;
        cantidadLibrosPorSocio = 0;

        while (numSocio == numAnteriorSocio)
        {
            numLibro = ppLibro = minLectura = 0;

            cout << "Ingrese el numero del libro"<< endl;
            cin >> numLibro;
            cout << "Ingrese el numero del paginas del libro"<< endl;
            cin >> ppLibro;
            cout << "Ingrese los minutos de lectura" << endl;
            cin >> minLectura;

            //A)
            ppLeidasPorSocio += ppLibro;
            //B)
            minTotalLecturaPorSocio += minLectura;
            cantidadLibrosTotales++;
            //C)
            if (ppLibro > 500)
            {
                socioQuinientos++;
            }
            //D)
            totalLectura += minLectura;
            //E)
            cantidadLibrosPorSocio++;

            cout << "Ingrese el  numero de socio actual '" << numSocio << "' para continuar el ingreso, uno distinto para continuar con otro socio o 0 para terminar"<< endl;
            cin >> numSocio;
        }
        //E)
        if (primerLector)
        {
            primerLector = false;
            granLector = numAnteriorSocio;
        }
        else if (cantidadLibrosPorSocio >  granLector)
        {
            granLector = numAnteriorSocio;
        }


        //A) Por cada socio, la cantidad total de p�ginas le�das.
        cout << "Paginas leidas por el Socio N" << numAnteriorSocio << " es de " << ppLeidasPorSocio << " paginas." << endl;
        //B)Por cada socio, el tiempo promedio total de lectura.
        cout << "El socio " << numAnteriorSocio << " tuvo un tiempo promedio total de lectura de " << minTotalLecturaPorSocio / cantidadLibrosTotales << " minutos." << endl;

    }

    //C) La cantidad de veces que un socio del club ha le�do un libro de m�s de 500 p�ginas.
    if (socioQuinientos > 0)
        cout << "La cantidad de socios que han leido libros de mas de 500 paginas son de " << socioQuinientos << "." << endl;
    else
        cout << "Ningun socio ha leido mas de 500 libros" << endl;
    //D) El tiempo total de lectura entre todos los socios.
    cout << "El tiempo total de lectura entre todos los socios fue de "<< totalLectura << " minutos" << endl;
    //E) El socio que m�s libros haya le�do.
    cout << "El numero de socio que mas libro ha leido es el N" << granLector << "." << endl;

    return 0;
}
