#include <iostream>
using namespace std;

int main()
{

    float importe, total;

    cout << "Ingrese el importe" << endl;
    cin >> importe;

    if  (importe < 100)
        total = importe * 0.95;
    else
    {
        if  (importe > 500)
            total = importe * 0.85;
        else
            total = importe * 0.90;
    }

    cout << "El importe total es de: " << total;

    return 0;
}
