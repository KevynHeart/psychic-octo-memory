
#include <stdio.h>
int main() {
    int v[10], i;
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("\nNumeros pares:\n");
    for(i = 0; i < 10; i++) {
        if(v[i] % 2 == 0) {
            printf("%d ", v[i]);
        }
    }
    return 0;
}
