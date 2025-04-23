#include <iostream>
#include <vector>
using namespace std;

template <typename T> T maxValeur(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

template <typename T> T maxValeur(vector<T> &v)
{
    T maxVal = 0;
    for (T &val : v)
    {
        if (maxVal < val)
            maxVal = val;
    }

    return maxVal;
}

int main()
{
    int a = 12, b = 10;
    cout << "La plus grande valeur entre int a et int b est: " << maxValeur(a, b) << endl;

    float c = 24.22, d = 23.87;
    cout << "La plus grande valeur entre float c et float d est: " << maxValeur(c, d) << endl;

    vector <int> intVector;
    intVector.push_back(10);
    intVector.push_back(20);
    intVector.push_back(30);
    cout << "La plus grande valeur dans intVector est: " << maxValeur(intVector) << endl;

    vector <double> doubleVector;
    doubleVector.push_back(19.99);
    doubleVector.push_back(30);
    doubleVector.push_back(30.01);
    cout << "La plus grande valeur dans doubleVector est: " << maxValeur(doubleVector) << endl;

}