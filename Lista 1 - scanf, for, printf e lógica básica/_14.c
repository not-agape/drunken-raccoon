#include <stdio.h>

int main() {
    // definição das variáveis
    #define n 2
    int vetor[n];
    
    // entrada de dados
    for(int pos = 0; pos < n; pos++){
        scanf("%d", &vetor[pos]);
    }
    
    // processamento e saída
    for (int pos = 0; pos < n; pos++){
        printf("Tabuada do %d\n", vetor[pos]);
        for (int mult = 1; mult <= 10; mult++){
            printf("%d x %d = %d\n", vetor[pos], mult, vetor[pos]*mult);
        }
    }
    
    return (0);
}
