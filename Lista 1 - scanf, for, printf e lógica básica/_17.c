#include <stdio.h>

int main() {
    // definição das variáveis
    #define m 3
    #define n 3
    int vetor[m][n];
    int neg = 0;
    
    // entrada de dados
    for (int lin = 0; lin < m; lin++){
        for (int col = 0; col < n; col++){
            scanf("%d", &vetor[lin][col]);
            
            // testa por entradas negativas
            if (vetor[lin][col] < 0){
                neg++;
            }
        }
    }
    
    // saída
    printf("A matriz tem %d elementos negativos.\n", neg);
    
    return (0);
}
