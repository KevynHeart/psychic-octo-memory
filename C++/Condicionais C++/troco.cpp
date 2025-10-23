#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double precoUnitario, valorPago;
    int quantidade;

    cout << "Preco unitario: ";
    cin >> precoUnitario;
    cout << "Quantidade: ";
    cin >> quantidade;
    cout << "Valor dado pelo cliente: ";
    cin >> valorPago;

    double total = precoUnitario * quantidade;
    cout << fixed << setprecision(2);
    cout << "Total da compra: R$ " << total << endl;

    if (valorPago >= total) {
        double troco = valorPago - total;
        cout << "Troco: R$ " << troco << endl;
    } else {
        double falta = total - valorPago;
        cout << "DINHEIRO INSUFICIENTE. FALTAM: R$ " << falta << endl;
    }
    return 0;
}
