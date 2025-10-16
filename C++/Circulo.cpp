#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r;
    const double PI = 3.14159;

    cout << "Raio do circulo: ";
    cin >> r;

    double area = PI * r * r;

    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;
}
