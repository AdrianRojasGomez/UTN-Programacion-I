#include <iostream>
using namespace std;

int gamma (int &n1, int &n2, int&n3)
{
    return n1+n2+n3;
}

int Alfa (int n1, int n2, int n3)
{
    return n1+n2+n3;
}

int main() {
 int n1 = 1, n2 = 2, n3 = 3;
 int alfa = 0, gamma = 0;

 alfa = Alfa(n1,n2,n3);

cout << alfa;
 	return 0;
}
