#include <iostream>
using namespace std;

int main()
{

    int n1,n2,n3,n4,n5,nMax, nMin;

    cout << "Ingrese 5 numeros para determinar el menor y el mayor" << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    cin >> n5;

    //Check n1 y n2
    if  (n1 > n2)
    {
        nMax = n1;
        nMin = n2;
    }
    else
    {
        nMax = n2;
        nMin = n1;
    }

    //Check n3
    if  (n3 > nMax)
    {
        nMax = n3;
    }
    else
    {
        if  (n3 < nMin)
        {
            nMin = n3;
        }
    }

    //Check n4
    if  (n4 > nMax)
    {
        nMax = n4;
    }
    else
    {
        if (n4 < nMin)
        {
            nMin = n4;
        }
    }

    //check n5
    if (n5 > nMax)
    {
        nMax = n5;
    }
    else
    {
        if  (n5 < nMin)
        {
            nMin = n5;
        }
    }

    cout << "El numero mayor es el " << nMax << endl;
    cout << "El numero menor es el " << nMin << endl;


    return 0;
}
