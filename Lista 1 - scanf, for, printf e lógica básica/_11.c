#include <stdio.h>

int main() {
    // definição das variáveis
    #define n 5
    int vetor_A[n], vetor_B[n];
    
    // entrada e processamento dos dados 
    for (int pos = 0; pos < n; pos++){
        scanf("%d", &vetor_A[pos]);
        vetor_B[pos] = vetor_A[pos] % 2;
    }
    
    // saída
    for (int pos = 0; pos < n; pos++){
        printf("a[%d] = %d b[%d] = %d\n", pos, vetor_A[pos], pos, vetor_B[pos]);
    }
    
    return (0);
}
