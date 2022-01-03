#include <stdio.h>

int main() {
    // declaração de variáveis
    #define n 6
    int vetor_A[n], vetor_B[n];
    _Bool iguais = 1;
    
    // entrada de dados
    for (int pos = 0; pos < n; pos++){
        scanf("%d", &vetor_A[pos]);
    }
    
    for (int pos = 0; pos < n; pos++){
        scanf("%d", &vetor_B[pos]);
    }
    
    // processamento dos dados
    for (int pos = 0; pos < n; pos++){
        if (vetor_A[pos] != vetor_B[pos]){
            iguais = 0;
        }
    }
    
    // saída
    if (iguais) {
        printf("Vetores \"a\" e \"b\" sao iguais!\n");
    } else {
        printf("Vetores \"a\" e \"b\" sao diferentes!\n");
    }
    
    return (0);
}
