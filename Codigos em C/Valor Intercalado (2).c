#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], vetor3[10];
    int i, j = 0;

    
    printf("Digite os 5 elementos do vetor 1:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    
    printf("\nDigite os 5 elementos do vetor 2:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    
    for(i = 0; i < 5; i++) {
        vetor3[j++] = vetor1[i];
        vetor3[j++] = vetor2[i];
    }

    
    printf("\nVetor intercalado: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor3[i]);
    }

    return 0;
}
