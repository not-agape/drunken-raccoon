#include <stdio.h>

// dado um número e uma matriz, encontra a posição relativa 
_Bool achaNum(int tamanho, int *matriz, int numInteresse)
{
    _Bool temNum;

    for (int linha = 0; linha < tamanho; linha++)
        for (int coluna = 0; coluna < tamanho; coluna++)        
            if (*((matriz + linha*tamanho) +coluna) == numInteresse){
                printf("%d --> (%d,%d)\n", numInteresse, linha, coluna);
                temNum = 1;
            }
               
    return temNum;
}


// questão 12: dada uma matriz quadrada NxN, procurar e retornar a posição de um número
int main ()
{
    
    int tamanho;
    scanf(" %d", &tamanho);

    int matriz[tamanho][tamanho];
    for (int linha = 0; linha < tamanho; linha++)
        for (int coluna = 0; coluna < tamanho; coluna++)
            scanf(" %d", &matriz[linha][coluna]);

    int numInteresse;
    scanf(" %d", &numInteresse);

    if(!achaNum(tamanho, (int *)matriz, numInteresse))
        printf("O numero %d nao estah na matriz\n", numInteresse);

    return 1;
}