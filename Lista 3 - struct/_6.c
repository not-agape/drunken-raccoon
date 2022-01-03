#include <stdio.h>

typedef struct {
    int inicio;
    int fim;
    int passo;
} pa;

int main() {
    // declaração das variáveis
    int nTestes;
    scanf("%d", &nTestes);
    pa nPA[nTestes]; 
    
    // entrada de dados
    for (int pos = 0; pos < nTestes; pos++) {
        do {
            scanf(" %d %d %d", &nPA[pos].inicio, &nPA[pos].fim, &nPA[pos].passo);
        } while (nPA[pos].inicio > nPA[pos].fim);
    }
    
    // processamento e saída
    for (int pos = 0; pos < nTestes; pos++) {
        int soma = 0;
        for (int atualPA = nPA[pos].inicio; atualPA <= nPA[pos].fim; atualPA += nPA[pos].passo) {
            printf("%d, ", atualPA);
            soma += atualPA;   
        }
        printf("soma = %d\n", soma);
    }
    
    printf("\nFim do programa!!!\n");
    
    return 0;
} 
