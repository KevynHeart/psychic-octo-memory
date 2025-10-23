#include <iostream>
using namespace std;

int main() {
    int vetor[10], num, encontrado = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i+1 << "º número: ";
        cin >> vetor[i];
    }

    cout << "Digite o número a procurar: ";
    cin >> num;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == num) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado)
        cout << "Número encontrado no vetor!" << endl;
    else
        cout << "Número não encontrado." << endl;
    return 0;
}
