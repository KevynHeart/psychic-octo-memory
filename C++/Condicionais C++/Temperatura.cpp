#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char escala;
    double valor;
    cout << "Digite a escala (C para Celsius ou F para Fahrenheit): ";
    cin >> escala;
    cout << "Digite o valor da temperatura: ";
    cin >> valor;

    cout << fixed << setprecision(2);
    if (escala == 'C' || escala == 'c') {
        double f = valor * 9.0/5.0 + 32.0;
        cout << valor << " C = " << f << " F" << endl;
    } else if (escala == 'F' || escala == 'f') {
        double c = (valor - 32.0) * 5.0/9.0;
        cout << valor << " F = " << c << " C" << endl;
    } else {
        cout << "Escala invalida. Use C ou F." << endl;
    }
    return 0;
}
