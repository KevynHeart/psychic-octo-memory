#include <stdio.h>

int main(){
    int i;
    int vetor[10];
    for(i=0; i<10; i++){
        printf("Digite o %dº termo do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Ordem inversa:\n");
    for(i=9; i>=0; i--){
        printf("%d ", vetor[i]);
    }
    return 0;
}
