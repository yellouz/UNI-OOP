#include <iostream>
#include <fstream>
using namespace std;

class Point3D
{
    private:
    int _x;
    int _y;
    int _z;
    static int _compteur;

    public:
    static int getCompteur()
    {
        return _compteur;
    }

    Point3D(int x, int y, int z)
    {
        _x = x;
        _y = y;
        _z = z;
        _compteur++;
    }

    ~Point3D()
    {
        cout << "Hi, I'm Destructor :-)" << endl;
    }

    Point3D operator+ (Point3D &other)
    {
        return Point3D(_x + other._x, _y + other._y, _z + other._z);
    }

    void Afficher()
    {
        printf("Point: (%d, %d, %d) \n", _x, _y, _z);
    }

    void sauvegarder()
    {
        fstream MyFile;

        MyFile.open("Points.txt", ios::out | ios::app); // write mode

        if (MyFile.is_open())
        {
            printf("File opened");
            MyFile << _x << ";" << _y << ";" << _z << endl;
            MyFile.close();
        }
    }
};

int Point3D::_compteur = 0; // initialisation

int main()
{
    Point3D point1(1,2,3);
    Point3D point2(5,6,7);
    Point3D point3 = point1 + point2;

    point1.sauvegarder();
    point2.sauvegarder();
    point3.sauvegarder();

    point1.Afficher();
    point2.Afficher();
    point3.Afficher();

    printf("Compteur = %d \n", Point3D::getCompteur());

}