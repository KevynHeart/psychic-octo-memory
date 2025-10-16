#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distancia, combustivel;

    cout << "Distancia percorrida (km): ";
    cin >> distancia;
    cout << "Combustivel gasto (litros): ";
    cin >> combustivel;

    double consumo = distancia / combustivel;

    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << consumo << " km/l" << endl;
}
