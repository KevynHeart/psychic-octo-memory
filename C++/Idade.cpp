#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome1, nome2;
    double idade1, idade2;

    cout << "Nome da primeira pessoa: ";
    getline(cin, nome1);
    cout << "Idade da primeira pessoa: ";
    cin >> idade1;
    cin.ignore();
    cout << "Nome da segunda pessoa: ";
    getline(cin, nome2);
    cout << "Idade da segunda pessoa: ";
    cin >> idade2;

    double media = (idade1 + idade2) / 2.0;
    cout << fixed << setprecision(1);
    cout << "A idade media de " << nome1 << " e " << nome2 << " eh " << media << " anos." << endl;
}
