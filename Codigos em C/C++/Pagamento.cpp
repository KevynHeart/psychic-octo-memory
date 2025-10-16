#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome;
    double valorHora, horas;
    
    cout << "Nome: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> horas;

    double pagamento = valorHora * horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser de R$ " << pagamento << endl;
}
