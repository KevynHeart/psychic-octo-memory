#include <stdio.h>

int main(){
    int i, range, fibonacci;
    printf("Quantos termos da sequência de Fibonacci você quer ver? ");
    scanf("%d", &range);
    int vetor[range];
    for (i = 0; i < range; i++) {
        if (i == 0) {
            fibonacci = 0;
        } else if (i == 1) {
            fibonacci = 1;
        } else {
            fibonacci = vetor[i - 1] + vetor[i - 2];
        }
        vetor[i] = fibonacci;
        printf("%d ", vetor[i]);
    }
    return 0;
}
