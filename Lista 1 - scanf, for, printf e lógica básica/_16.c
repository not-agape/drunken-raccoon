#include <stdio.h>

int main() {
    // definição das variáveis
    #define n 7
    int vetor_A[n], vetor_B[n], vetor_C[n];
    int contador = 0;
    _Bool achou;
    
    // entrada de dados
    for (int pos = 0; pos < n; pos++){
        scanf("%d", &vetor_A[pos]);
    }
    
    for (int pos = 0; pos < n; pos++){
        scanf("%d", &vetor_B[pos]);
    }
    
    // processamento
    for (int pos_A = 0; pos_A < n; pos_A++){
        achou = 0;
        for (int pos_B = 0; pos_B < n; pos_B++){
            if (vetor_A[pos_A] == vetor_B[pos_B]){
                achou = 1;
            }
        }
        if (!achou){
            vetor_C[contador] = vetor_A[pos_A];
            contador++;
        }
    }
    
    // saída
    if (contador == 0){
        printf("Nao ha conjunto diferenca.\n");
    } else {
        printf("Diferenca:\n");
        for (int pos = 0; pos < contador; pos++){
            printf("C[%d]= %d\n", pos, vetor_C[pos]);
        }
    }
    
    return (0);
}
