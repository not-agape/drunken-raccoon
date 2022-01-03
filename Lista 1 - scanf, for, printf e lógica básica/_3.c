#include <stdio.h>

int main() {

    // declaração das variáveis
    #define n 10
    int vetor[n];
    int pares = 0;

    // entrada de dados do usuário
    for (int pos = 0; pos < n; pos++){
        scanf("%d", &vetor[pos]);

        if (vetor[pos] % 2 == 0){
            pares++;
        }
    }

    // saída de dados
    printf("Qtd. de nros pares armazenados no vetor eh = %d\n", pares);

    return (0);
}
