#include <stdio.h>

int main() {
    // definição das variáveis
    #define m 3
    #define n 3
    int vetor[m][n];
    int soma = 0;
    
    // entrada de dados
    for (int lin = 0; lin < m; lin++){
        for (int col = 0; col < n; col++){
            scanf("%d", &vetor[lin][col]);
            
            // soma a entrada
            soma += vetor[lin][col];
        }
    }
    
    // saída
    printf("Soma dos elementos: %d\n", soma);
    
    return (0);
}
