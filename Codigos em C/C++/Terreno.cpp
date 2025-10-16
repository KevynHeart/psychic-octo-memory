#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double largura, comprimento, valor_m2;
    cout << "Largura do terreno (m): ";
    cin >> largura;
    cout << "Comprimento do terreno (m): ";
    cin >> comprimento;
    cout << "Valor do metro quadrado (R$): ";
    cin >> valor_m2;

    double area = largura * comprimento;
    double preco = area * valor_m2;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << " m2\n";
    cout << "Preco do terreno = R$ " << preco << endl;
}
