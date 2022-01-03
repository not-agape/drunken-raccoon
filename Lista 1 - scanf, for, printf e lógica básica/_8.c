#include <stdio.h>

int main() {
    // declaração das variáveis
    #define n 10
    int vetor[n];
    int maior, menor;
    
    // entrada e processamento dos dados
    for (int pos = 0; pos < n; pos++){
        scanf("%d", &vetor[pos]);
        
        // inicializador dos contadores
        if (pos == 0) {
            maior = vetor[pos];
            menor = maior;
        }
        
        if (vetor[pos] > maior) {
            maior = vetor[pos];
        } else if (vetor[pos] < menor){
            menor = vetor[pos];
        }
    }
    
    // saída
    printf("Menor valor: %d\nMaior valor: %d\n", menor, maior);
    
    return (0);
}
