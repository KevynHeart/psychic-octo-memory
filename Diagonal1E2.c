#include <stdio.h>

void somaDiagonais(int matriz[3][3]) {
    int somaPrincipal = 0, somaSecundaria = 0;

    for(int i = 0; i < 3; i++) {
        somaPrincipal += matriz[i][i];           // diagonal principal
        somaSecundaria += matriz[i][2 - i];      // diagonal secundária
    }

    printf("Soma da diagonal principal = %d\n", somaPrincipal);
    printf("Soma da diagonal secundaria = %d\n", somaSecundaria);
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    somaDiagonais(matriz);
    return 0;
}
