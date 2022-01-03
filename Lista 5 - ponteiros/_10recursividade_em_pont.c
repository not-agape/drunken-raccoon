#include <stdio.h>

// função recursiva para mostrar os valores de um ponteiro
void mostraPonteiro(int *vetor, int posicao)
{
    if (posicao != 0)
    {
        mostraPonteiro(&vetor[0], posicao-1);
        printf("%d ", *(vetor +(posicao-1)));
    }
}

// questão 10: mostra um ponteiro usando recursividade de funções
int main ()
{

    int tamanho; 
    scanf(" %d", &tamanho);

    int vetor[tamanho];
    for (int posicao = 0; posicao < tamanho; posicao++)
        scanf(" %d", &vetor[posicao]);

    mostraPonteiro(&vetor[0], tamanho);

    printf("\nFim do vetor\n");

    return 1;
}