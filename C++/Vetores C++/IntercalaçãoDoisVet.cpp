#include <iostream>
using namespace std;

int main() {
    int v1[5], v2[5], v3[10];

    cout << "Digite os 5 elementos do primeiro vetor:\n";
    for (int i = 0; i < 5; i++) cin >> v1[i];

    cout << "Digite os 5 elementos do segundo vetor:\n";
    for (int i = 0; i < 5; i++) cin >> v2[i];

    for (int i = 0; i < 5; i++) {
        v3[i * 2] = v1[i];
        v3[i * 2 + 1] = v2[i];
    }

    cout << "Vetor intercalado: ";
    for (int i = 0; i < 10; i++)
        cout << v3[i] << " ";
    cout << endl;
    return 0;
}
