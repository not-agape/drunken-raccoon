#include <stdio.h>

_Bool temNum;

// dado um número e uma matriz, encontra a posição relativa 
void achaNum(int tamanho, int linha, int coluna, int *matriz, int numInteresse)
{
    
    // fim do loop
    if (linha == 0 && coluna == 0)
        if (*(matriz +linha*tamanho +coluna) == numInteresse)
        {
            printf("%d --> (%d,%d)\n", numInteresse, linha, coluna);
            temNum = 1;    
            return;
        }
        else
            return;

    /**
    * @debug
    * printf("#[%d,%d]: %d\n", linha, coluna, *(matriz +linha*tamanho +coluna));
    */


    if (coluna == 0)
        if(*(matriz +linha*tamanho +coluna) == numInteresse)
        {
            printf("%d --> (%d,%d)\n", numInteresse, linha, coluna);
            temNum = 1;
            achaNum(tamanho, linha -1, tamanho -1, matriz, numInteresse);
        }
        else
            achaNum(tamanho, linha -1, tamanho -1, matriz, numInteresse);
    else
        if (*(matriz +linha*tamanho +coluna) == numInteresse)
        {
            printf("%d --> (%d,%d)\n", numInteresse, linha, coluna);
            temNum = 1;
            achaNum(tamanho, linha, coluna -1, matriz, numInteresse);
        }
        else
            achaNum(tamanho, linha, coluna -1, matriz, numInteresse);
        
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

    achaNum(tamanho, tamanho -1, tamanho -1, (int *)matriz, numInteresse);

    if(!temNum)
        printf("O numero %d nao estah na matriz\n", numInteresse);

    return 1;
}