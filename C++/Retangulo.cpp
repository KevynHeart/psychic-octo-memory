#include <stdio.h>
#include <string.h>

int main() {
    double largura, comprimento, valor_m2, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor_m2);

    area = largura * comprimento;
    preco = area * valor_m2;

    printf("AREA = %.2lf\n", area);
    printf("PRECO = %.2lf\n", preco);

    return 0;
}