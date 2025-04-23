#include <iostream>
using namespace std;

template <typename T> T maxValeur(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    float a = 12, b = 10;

    cout << "La plus grande valeur est: " << maxValeur(a, b) << endl;
}