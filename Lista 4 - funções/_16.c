/**
 * Escreva uma função void removeRepeticao(int *A, int *B, int tamA) para eliminar sequências
 * de números repetidos em um vetor de inteiros (de 0 a 9) recebido como parâmetro. A função deverá:
 *
 * - Receber dois vetores A e B do tipo inteiro (limitados a 20 posições cada), e uma variável
 * do tipo inteiro tamA que representa a quantidade de números armazenados em A;
 * - Gerar B a partir de A, eliminando números repetidos que aparecem em sequência.
 * - Contar e imprimir na saída a quantidade de número eliminados.
 * - Imprimir os vetores A e B na tela, um em cada linha.
**/

#include <stdio.h>

// tira as repetições em um vetor de números de tamanho A
void removeRepeticao(int *A, int *B, int tamA){

    int contagemRep = 0;
    int indiceB = 0;
    int temp;

    for (int indice = 0; indice < tamA; indice++) {
        if (A[indice] != temp){
            temp = A[indice];
            B[indiceB] = temp;
            indiceB++;
        } else
            contagemRep++;        
    }

    // saída -> mostra reps e ambas as arrays
    printf("%d\n", contagemRep);

    for (int pos = 0; pos < tamA; pos++)
        printf("%d", A[pos]);
    
    printf("\n");

    for (int pos = 0; pos < indiceB; pos++)
        printf("%d", B[pos]);

    printf("\n");    
    
}

void main() {
    
    int A[20] = {1, 1, 1, 3, 1, 3, 3, 4, 1, 1, 2, 2, 2, 2, 5, 8, 0, 2, 6, 6};
    int B[20] = {};
    
    removeRepeticao(A, B, 20);

}