#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

double calcularMayorMagnitud(Point puntos[], int n, int &indiceMayor) {
    if (n <= 0) {
        indiceMayor = -1;
        return 0.0;
    }

    double maxMagnitud = sqrt(puntos[0].x * puntos[0].x +
                              puntos[0].y * puntos[0].y);
    indiceMayor = 0;

    for (int i = 1; i < n; i++) {
        double magnitud = sqrt(puntos[i].x * puntos[i].x +
                               puntos[i].y * puntos[i].y);

        if (magnitud > maxMagnitud) {
            maxMagnitud = magnitud;
            indiceMayor = i;
        }
    }

    return maxMagnitud;
}

int main() {
    int n;

    cout << "Ingrese el numero de puntos: ";
    cin >> n;

    if (n <= 0) {
        cout << "El numero de puntos debe ser mayor que 0." << endl;
        return 1;
    }

    Point* puntos = new Point[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese x para el punto " << (i + 1) << ": ";
        cin >> puntos[i].x;

        cout << "Ingrese y para el punto " << (i + 1) << ": ";
        cin >> puntos[i].y;
    }

    int indiceMayor;
    double mayorMagnitud = calcularMayorMagnitud(puntos, n, indiceMayor);

    cout << "La mayor magnitud es: " << mayorMagnitud << endl;
    cout << "El indice del punto con mayor magnitud es: " << indiceMayor << endl;
    cout << "El punto es: (" 
         << puntos[indiceMayor].x << ", "
         << puntos[indiceMayor].y << ")" << endl;

    delete[] puntos;

    return 0;
}
