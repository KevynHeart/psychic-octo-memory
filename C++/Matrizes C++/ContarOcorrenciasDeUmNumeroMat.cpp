#include <iostream>
using namespace std;

int contar(int matriz[4][4], int num) {
    int cont = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (matriz[i][j] == num)
                cont++;
    return cont;
}

int main() {
    int matriz[4][4], num;
    cout << "Digite os elementos da matriz 4x4:\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> matriz[i][j];

    cout << "Digite o número a procurar: ";
    cin >> num;

    cout << "O número aparece " << contar(matriz, num) << " vezes.\n";
    return 0;
}
