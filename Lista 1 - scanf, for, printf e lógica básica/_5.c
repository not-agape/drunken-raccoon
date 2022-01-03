#include <stdio.h>

int main() {
    // declaração das variáveis
    #define n 7
    int vetor[n];
    int pares = 0;
    
    // entrada dos valores
    for (int pos = 0; pos < n; pos++){
        scanf("%i", &vetor[pos]);
        if (vetor[pos] % 2 == 0){
            pares++;
        }
    }
    
    // saída
    printf("Percentuais --> Par: %.2f%% Impar: %.2f%%", (float) 100*pares/n, (float) 100*(n-pares)/n); 
    
    return (0);
}
