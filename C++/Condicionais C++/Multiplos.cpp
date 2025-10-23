#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Digite dois numeros inteiros: ";
    cin >> a >> b;

    if (a == 0 || b == 0) {
        if (a == 0 && b == 0) {
            cout << "Ambos zero: consideramos multiplos entre si." << endl;
        } else if (a == 0) {
            cout << "0 e multiplo de " << b << " (0 eh multiplo de qualquer inteiro)." << endl;
        } else {
            cout << "0 e multiplo de " << a << " (0 eh multiplo de qualquer inteiro)." << endl;
        }
        return 0;
    }

    if (a % b == 0) {
        cout << a << " eh multiplo de " << b << endl;
    } else if (b % a == 0) {
        cout << b << " eh multiplo de " << a << endl;
    } else {
        cout << "Nenhum numero eh multiplo do outro." << endl;
    }
    return 0;
}
