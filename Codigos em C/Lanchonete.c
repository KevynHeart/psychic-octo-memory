#include <stdio.h>

int main() {
    int codigo, quantidade;
    double total;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    if (codigo == 1) total = quantidade * 5.00;
    else if (codigo == 2) total = quantidade * 3.50;
    else if (codigo == 3) total = quantidade * 4.80;
    else if (codigo == 4) total = quantidade * 8.90;
    else if (codigo == 5) total = quantidade * 7.32;
    else {
        printf("Codigo invalido!\n");
        return 0;
    }

    printf("Total a pagar: R$ %.2lf\n", total);
    return 0;
}
