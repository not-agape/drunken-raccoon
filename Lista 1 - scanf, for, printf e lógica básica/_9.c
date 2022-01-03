#include <stdio.h>

int main() {
    // declaração das variáveis
    #define n 10
    int vetor_A[n], vetor_B[n], vetor_C[n];
    
    // entrada de dados
    for(int pos = 0; pos < n; pos++){
        scanf("%d", &vetor_A[pos]);
    }
    for(int pos = 0; pos < n; pos++){
        scanf("%d", &vetor_B[pos]);
    }
    
    // saída
    for(int pos = 0; pos < n; pos++){
        vetor_C[pos] = vetor_A[pos] - vetor_B[pos];
        printf("%d: %d - %d = %d\n", pos, vetor_A[pos], vetor_B[pos], vetor_C[pos]);
    }
    
    return (0);
}
