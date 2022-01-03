#include <stdio.h>

// dado um vetor de inteiros, retorna a soma
int somaVetor (int *vetor, int posicao)
{
    int soma;

    if (posicao == 0)
        return 0;
    else
    {
        soma = *(vetor +(posicao -1)) + somaVetor(vetor, posicao -1);
        return soma;
    }
}

// questão 11: soma vetores de forma recursiva
int main ()
{

    int tamanho;
    scanf(" %d", &tamanho);

    int vetor[tamanho];
    for (int posicao = 0; posicao < tamanho; posicao++)
        scanf(" %d", &vetor[posicao]);
    
    printf("Soma dos elementos do vetor: %d\n", somaVetor(&vetor[0], tamanho));
    
    return 1;
}