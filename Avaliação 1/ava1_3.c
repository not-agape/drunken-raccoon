/**
 * @file av1_3.c
 * @author Pedro Matias (pedromatias@alunos.utfpr.edu.br)
 * @brief 
 * @version 0.1
 * @date 2021-12-13
 */

#include <stdio.h>

void somatorio(int n)
{
    int soma = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i != n)
            printf("%d + ", i);
        else
            printf("%d = ", i);
        
        soma += i;
    }

    printf("%d.\n", soma);
}

// Questão 3: Somatório até N
int main()
{

    int tamanho;
    scanf(" %d", &tamanho);

    int vetor[tamanho];
    for (int posicao = 0; posicao < tamanho; posicao++) 
        scanf(" %d", &vetor[posicao]);
    
    for (int posicao = 0; posicao < tamanho; posicao++)
        somatorio(vetor[posicao]);
    
    return 1;
}