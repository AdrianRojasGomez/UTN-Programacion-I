#include <iostream>
using namespace std;

int main()
{
    int c = 3, repetidor = 0;
    bool flag = true;

    while (flag == true)
    {
        repetidor++;
        cout << "repeticion: " << repetidor << endl;
        c+=3;

        if(c%12==0)
        {
            cout <<c;
            flag = false;
        }

    }
    return 0;
}
