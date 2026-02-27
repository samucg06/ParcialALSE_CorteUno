#include <iostream>
using namespace std;

struct Point
{
    double x;
    double y;
};

Point calcularCentroide(Point puntos[], int n)
{
    double sumaX = 0.0;
    double sumaY = 0.0;

    for (int i = 0; i < n; i++)
    {
        sumaX += puntos[i].x;
        sumaY += puntos[i].y;
    }

    Point centroide;
    centroide.x = sumaX / n;
    centroide.y = sumaY / n;

    return centroide;
}

int main()
{
    int n;

    cout << "Ingrese la cantidad de puntos: ";
    cin >> n;

    Point puntos[100];

    for (int i = 0; i < n; i++)
    {
        cout << "Punto " << i + 1 << endl;
        cout << "Ingrese x: ";
        cin >> puntos[i].x;
        cout << "Ingrese y: ";
        cin >> puntos[i].y;
        cout << endl;
    }

    Point centroide = calcularCentroide(puntos, n);

    cout << "El centroide es: ("
         << centroide.x << ", "
         << centroide.y << ")" << endl;

    return 0;
}