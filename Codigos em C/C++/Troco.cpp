#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, dinheiro;
    int qtd;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Valor pago pelo cliente: ";
    cin >> dinheiro;

    double total = preco * qtd;
    double troco = dinheiro - total;

    cout << fixed << setprecision(2);
    cout << "Troco = R$ " << troco << endl;
}
