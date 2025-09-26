
#include <stdio.h>
int main() {
    int v[10], i, soma = 0;
    float media;
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &v[i]);
        soma += v[i];
    }
    media = soma / 10.0;
    printf("\nMedia = %.2f\n", media);
    return 0;
}
