#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cout << "Digite os coeficientes a b c: ";
    cin >> a >> b >> c;

    if (a == 0.0) {
        cout << "Nao eh equacao de segundo grau." << endl;
        return 0;
    }

    double delta = b*b - 4*a*c;
    if (delta < 0.0) {
        cout << "Nao existem raizes reais." << endl;
    } else {
        double x1 = (-b + sqrt(delta)) / (2*a);
        double x2 = (-b - sqrt(delta)) / (2*a);
        cout << fixed << setprecision(4);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    return 0;
}
