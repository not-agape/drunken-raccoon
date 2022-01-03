#include <stdio.h>

int main() {
    
    // declaração das variáveis
    #define n 5
    int vetor[n];
    int soma = 0;
    
    // entrada de dados
    for (int pos = 0; pos < n; pos++){
        scanf("%d", &vetor[pos]);
        soma += vetor[pos];
    }
    
    // saída
    printf("A soma eh %d e a media eh %.2f\n", soma, (float)soma/n);
    
    return (0);
}
