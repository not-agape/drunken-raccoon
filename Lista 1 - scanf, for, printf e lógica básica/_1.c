#include <stdio.h>

void main() {
    // definição das variáveis
    #define n 6
    int vetor[n];

    // entrada de dados
    for (int pos = 0; pos < n; pos++){
        scanf("%d", &vetor[pos]);
    }

    // saída de dados
    for (int pos = n-1; pos >= 0; pos--){
        printf("%d ", vetor[pos]);
    }
}
