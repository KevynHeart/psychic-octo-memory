#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;

    cout << "Digite as tres medidas A, B e C:\n";
    cin >> A >> B >> C;

    double area_quadrado = A * A;
    double area_triangulo = (A * B) / 2.0;
    double area_trapezio = ((A + B) * C) / 2.0;

    cout << fixed << setprecision(4);
    cout << "Area do quadrado = " << area_quadrado << endl;
    cout << "Area do triangulo retangulo = " << area_triangulo << endl;
    cout << "Area do trapezio = " << area_trapezio << endl;
}
