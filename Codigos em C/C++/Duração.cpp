#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int duracao;
    cout << "Duracao em segundos: ";
    cin >> duracao;

    int horas = duracao / 3600;
    int minutos = (duracao % 3600) / 60;
    int segundos = duracao % 60;

    cout << setfill('0') << setw(2) << horas << ":"
         << setw(2) << minutos << ":"
         << setw(2) << segundos << endl;
}
