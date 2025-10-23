#include <iostream>
using namespace std;

int main() {
    int vetor[20], pares = 0, impares = 0;
    for (int i = 0; i < 20; i++) {
        cout << "Digite o " << i+1 << "º número: ";
        cin >> vetor[i];
        if (vetor[i] % 2 == 0)
            pares++;
        else
            impares++;
    }
    cout << "Pares: " << pares << ", Ímpares: " << impares << endl;
    return 0;
}
