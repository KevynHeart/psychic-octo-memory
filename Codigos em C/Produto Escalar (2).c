#include <stdio.h>

int main() {
    int vetorA[5], vetorB[5];
    int i, produto_escalar = 0;

    // Leitura do vetorA
    printf("Digite os 5 elementos do vetor A:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetorA[i]);
    }

    // Leitura do vetorB
    printf("\nDigite os 5 elementos do vetor B:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetorB[i]);
    }

    // Cálculo do produto escalar
    for(i = 0; i < 5; i++) {
        produto_escalar += vetorA[i] * vetorB[i];
    }

    printf("\nProduto escalar = %d\n", produto_escalar);

    return 0;
}