#include <stdio.h>

int main() {
    // definição das variáveis
    #define n 3
    int vetor[n][n];
    _Bool falhou = 0;
    
    // entrada dos dados
    for (int lin = 0; lin < n; lin++){
        for (int col = 0; col < n; col++){
            scanf("%d", &vetor[lin][col]);
        }    
    }
    
    // processamento
    for (int lin = 0; lin < n; lin++){
        for (int col = 0; col < n; col++){
            if ((lin != col && vetor[lin][col] != 0) || (lin == col && vetor[lin][col] != 1)){
                falhou = 1;
            }
        }    
    }
    
    // saída
    if (!falhou){
        printf("A matriz eh identidade.\n");
    } else {
        printf("A matriz nao eh identidade.\n");
    }
    
    return (0);
}
