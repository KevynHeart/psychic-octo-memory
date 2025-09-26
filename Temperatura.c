#include <stdio.h>

int main() {
    char escala;
    double valor, convertido;

    printf("Digite a escala de origem (C ou F): ");
    scanf(" %c", &escala);
    printf("Digite o valor da temperatura: ");
    scanf("%lf", &valor);

    if (escala == 'C' || escala == 'c') {
        convertido = (9.0 * valor / 5.0) + 32.0;
        printf("Temperatura em Fahrenheit: %.2lf\n", convertido);
    } else if (escala == 'F' || escala == 'f') {
        converted = 5.0 * (valor - 32.0) / 9.0;
        printf("Temperatura em Celsius: %.2lf\n", converted);
    } else {
        printf("Escala invalida! Use C ou F.\n");
    }

    return 0;
}
