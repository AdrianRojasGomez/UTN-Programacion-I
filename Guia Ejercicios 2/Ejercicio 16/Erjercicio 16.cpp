#include <iostream>
using namespace std;

int main()
{

    int n1,n2,n3,n4;
    int notasMas4 = 0;
    int notasMas7 = 0;

    cout << "Ingrese las 4 notas" << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    if  (n1 >=4)
    {
        notasMas4++;
        if  (n1 >=7)
            notasMas7++;
    }

    if  (n2 >=4)
    {
        notasMas4++;
        if  (n2 >=7)
            notasMas7++;
    }

    if  (n3 >=4)
    {
        notasMas4++;
        if  (n3 >=7)
            notasMas7++;
    }

    if  (n4 >=4)
    {
        notasMas4++;
        if  (n4 >=7)
            notasMas7++;
    }

    if (notasMas7 == 4)
        cout << "Promociona" << endl;
    else if (notasMas4 >= 3)
        cout << "Rinde Final" << endl;
    else if (notasMas4 >= 1)
        cout << "Recupera Parcial" << endl;
    else
        cout << "Recursa" << endl;



    return 0;
}
