#include <iostream>
using namespace std;

int main()
{

    int kw,total;
    char tipo;
    cout << "Ingrese el consumo de energia" << endl;

    cin >> kw;

    if (kw > 200)
        tipo = 'c';
    else
    {
        if (kw > 100 && kw < 200)
            tipo = 'b';
        else
            tipo = 'a';
    }

    switch (tipo)
    {
    case 'a':
        total = kw * 10;
        break;
    case  'b':
        total = 1000;
        total = total + ((kw -100) *12);
        break;
    case  'c':
        total = 2200;
        total = total + ((kw -200) * 15);
        break;
    default:
        cout << "Error" << endl;
        break;

    }

    cout << "El total a pagar es " << total << " . " <<endl;




    return 0;
}
