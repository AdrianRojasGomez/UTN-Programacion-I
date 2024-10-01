#include <iostream>
using namespace std;

/*Un club de lectura desea registrar la información de los 5 libros que leyeron sus 10 socios en el último mes. Por cada socio y libro se registró:
Número de socio (entero)
Número de libro (entero)
Cantidad de páginas del libro (entero)
Tiempo total de lectura en minutos (entero)

La información está agrupada por socio. Todos los socios leyeron 5 libros.

Se pide calcular e informar:
Por cada socio, la cantidad total de páginas leídas.
Por cada socio, el tiempo promedio total de lectura.
La cantidad de veces que un socio del club ha leído un libro de más de 500 páginas.
El tiempo total de lectura entre todos los socio.
*/

int main()
{

    const int socios = 10;
    const int libros = 5;

    int numSocio, numLibro, ppLibro, tiempoLectura;

    int ppLeidasPorSocio;
    int totalLecturaPorSocio;

    int mayorQuinientos = 0;

    int totalLectura = 0;

    for (int i = 0; i < socios; i++)
    {
        cout << "Ingrese el numero de socio" << endl;
        cin >> numSocio;
        ppLeidasPorSocio = 0;
        totalLecturaPorSocio = 0;

        for (int j = 0; j < libros; j++)
        {
            cout << "Ingrese el numero del libro " << endl;
            cin >> numLibro;
            cout << "Ingrese la cantidad de paginas del libro "<< endl;
            cin >> ppLibro;
            cout << "Ingrese el tiempo total de lectura " << endl;
            cin >> tiempoLectura;

            //A) Cantidad total de Paginas Leidas
            ppLeidasPorSocio += ppLibro;

            //B) Tiempo promedio de lectura
            totalLecturaPorSocio += tiempoLectura;

            //C) Mayor a Quinientas Paginas
            if (ppLibro > 500)
            {
                mayorQuinientos++;
            }

            //D) Total Lectura
            totalLectura += tiempoLectura;

        }

        //A) Cantidad total de Paginas Leidas
        cout << "El socio " << numSocio << " leyo " << ppLeidasPorSocio << " paginas." << endl;
        //B) Tiempo promedio de lectura
        cout << "El socio " << numSocio << " tuvo un promedio total de lectura de  " << totalLecturaPorSocio/libros << " minutos." << endl;



    }
    //C) Mayor a Quinientas Paginas
    if (mayorQuinientos > 0)
        cout << "Un socio del club ha leido un libro con mas de 500pp. " << mayorQuinientos << " veces" << endl;
    else
        cout << "ningun Socio ha leido un libro con mas de 500pp." << endl;

    //D) Total Lectura
    cout << "El tiempo total de lectura entre todos los socios es de " << totalLectura << " minutos."<< endl;

    return 0;
}
