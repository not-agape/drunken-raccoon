#include <stdio.h>

int main() {
    // declaração das variáveis
    #define n 10
    int vetor_A[n];
    int procura;
    _Bool achou;
    
    // entrada
    for (int pos = 0; pos < n; pos++){
        scanf("%d", &vetor_A[pos]);
    }
    scanf("%d", &procura);
    
    // processamento e saída
    for (int pos = 0; pos < n; pos++){
        if (vetor_A[pos] == procura){
            printf("Valor localizado na posicao %d.\n", pos);
            achou = 1;
        } else if (pos == n-1 && !achou){
            printf("Valor nao foi localizado.\n");   
        }    
    }
    
    return (0);
}
