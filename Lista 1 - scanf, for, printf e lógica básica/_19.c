#include <stdio.h>

int main() {
    // definição das variáveis
    #define n 3
    int vetor[n][n], vetor_Diag[n];
    int soma = 0;
    int contador = 0;
    
    // entrada de dados
    for (int lin = 0; lin < n; lin++){
        for (int col = 0; col < n; col++){
            scanf("%d", &vetor[lin][col]);
            
            // salva e soma a diag
            if (lin == col){
                vetor_Diag[contador] = vetor[lin][col];
                soma += vetor_Diag[contador];
                contador++;
            }
        }
    }
    
    // saída
    printf("Elementos da diagonal principal:\n");
    for (int pos = 0; pos < contador; pos++){
        printf("x[%d][%d]: %d\n", pos, pos, vetor_Diag[pos]);
    }
    printf("\nSoma: %d\n", soma);
    
    return (0);
}
