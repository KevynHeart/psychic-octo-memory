
#include <stdio.h>
int main() {
    int v[10], i;
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("\nVetor invertido:\n");
    for(i = 9; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    return 0;
}
