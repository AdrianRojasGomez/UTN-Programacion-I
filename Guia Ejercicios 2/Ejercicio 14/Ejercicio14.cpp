#include <iostream>
using namespace std;

int main()
{

    int dn, mn, an, da, ma, aa, edad;
    bool cumplio;

    cout << "Ingrese el dia de nacimiento" << endl;
    cin >> dn;
    cout << "Ingrese el mes de nacimiento" << endl;
    cin >> mn;
    cout << "Ingrese el año de nacimiento" << endl;
    cin >> an;

    cout << "Ingrese el dia actual" << endl;
    cin >> da;
    cout << "Ingrese el mes actual" << endl;
    cin >> ma;
    cout << "Ingrese el año actual" << endl;
    cin >> aa;

    if  (ma > mn)
    {
        cumplio = true;
    }
    else
    {
        if(ma == mn)
        {
            if (da > dn)
                cumplio = true;
            else
                cumplio = false;

        }
        else
            cumplio = false;
    }

    if (cumplio)
        edad = aa - an;
    else
        edad = (aa - an) - 1;

    cout << "La edad es de " << edad << "." << endl;

    return 0;
}
