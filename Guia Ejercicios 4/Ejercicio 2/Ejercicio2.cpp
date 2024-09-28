#include <iostream>
using namespace std;

int main()
{

    int value = 1, counter = 0;

    while (value <= 20)
    {
        if (counter == 0)
        {
            cout << value << endl;
        }


        value++;
        counter++;
        if (counter == 3)
            counter = 0;

    }

    return 0;
}
