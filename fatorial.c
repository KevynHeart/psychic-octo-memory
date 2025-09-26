#include <stdio.h>

int main(){
    int i, numero;
    printf("Qual numero quer o fatorial?");
    scanf("%d", &numero);
    int vetor[numero];
    vetor[0] = 1;
    for(i=1; i<numero; i++){
        vetor[i] = vetor[i-1] * (i+1);
    }
    printf("O fatorial de %d é %d\n", numero, vetor[numero-1]); 
    return 0;
}