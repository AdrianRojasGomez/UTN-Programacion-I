#include <iostream>
using namespace std;

int main()
{

    int n1,n2,n3,n4,n5;
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;

    cout << "Ingresa 5 numeros" << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    cin >> n5;

    if (n1 > 0)
        positivos++;
    else if  (n1 == 0)
        ceros++;
    else
        negativos++;

            if (n2 > 0)
        positivos++;
    else if  (n2 == 0)
        ceros++;
    else
        negativos++;

            if (n3 > 0)
        positivos++;
    else if  (n3 == 0)
        ceros++;
    else
        negativos++;

            if (n4 > 0)
        positivos++;
    else if  (n4 == 0)
        ceros++;
    else
        negativos++;

            if (n5 > 0)
        positivos++;
    else if  (n5 == 0)
        ceros++;
    else
        negativos++;

        cout << "Hay " << positivos << " numeros positivos" << endl;
        cout << "Hay " << ceros << " numeros cero" << endl;
        cout << "Hay " << negativos << " numeros negativos" << endl;

        return 0;
}
