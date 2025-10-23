#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int minutos;
    const double base = 50.00;
    const int franquia = 100;
    const double custoExtra = 2.00;

    cout << "Digite a quantidade de minutos consumidos: ";
    cin >> minutos;

    double total = base;
    if (minutos > franquia) {
        total += (minutos - franquia) * custoExtra;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << total << endl;
    return 0;
}
