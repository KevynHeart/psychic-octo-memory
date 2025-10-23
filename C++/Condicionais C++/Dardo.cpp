#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double t1, t2, t3;
    cout << "Digite as tres tentativas (distancias): ";
    cin >> t1 >> t2 >> t3;

    double maior = t1;
    int tentativa = 1;
    if (t2 > maior) { maior = t2; tentativa = 2; }
    if (t3 > maior) { maior = t3; tentativa = 3; }

    cout << fixed << setprecision(2);
    cout << "Tentativas: " << t1 << ", " << t2 << ", " << t3 << endl;
    cout << "Maior distancia: " << maior << " (tentativa " << tentativa << ")" << endl;
    return 0;
}
