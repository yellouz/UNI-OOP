#include <iostream>
#include <string>
#include <memory>
using namespace std;

inline void afficherTableau(int *tab, int taille, string titre = "Contenu: ")
{
    cout << titre;
    for (int i = 0; i < taille; i++)
        cout << tab[i] << ", ";

    cout << endl;
}

int main()
{
    int *tab1 = new int[5];
    tab1[0] = 1;
    tab1[1] = 2;
    tab1[2] = 3;
    tab1[3] = 4;
    tab1[4] = 5;

    unique_ptr <int[]> tab2(new int[5]);
    tab2[0] = 6;
    tab2[1] = 7;
    tab2[2] = 8;
    tab2[3] = 9;
    tab2[4] = 10;

    afficherTableau(tab1, 5, "tab1: ");
    afficherTableau(tab2.get(), 5, "tab2: ");

    delete[] tab1;
    // tab2 va etre liberee automatiquement
    
    return 0;
}

