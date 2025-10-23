#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double glicose;
    cout << "Digite a quantidade de glicose (mg/dl): ";
    cin >> glicose;

    cout << fixed << setprecision(0);
    if (glicose <= 100.0) {
        cout << "Classificacao: Normal (ate 100 mg/dl)" << endl;
    } else if (glicose <= 140.0) {
        cout << "Classificacao: Elevado (maior que 100 ate 140 mg/dl)" << endl;
    } else {
        cout << "Classificacao: Diabetes (maior de 140 mg/dl)" << endl;
    }
    return 0;
}
