#include <stdio.h>

int main() {
    // declaração das variáveis
    #define n 8
    int vetor[n];
    int x, y;
    
    // entrada de dados
    for (int pos = 0; pos < n; pos++){
        scanf("%d", &vetor[pos]);
    }
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    // saída
    printf("A soma das duas posicoes vale: %d", vetor[x] + vetor[y]);
    
    return (0);
}
