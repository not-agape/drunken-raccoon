#include <stdio.h>

// sabendo o endereço e tamanho de uma array, troca os valores pelo fornecido. 
void subsVetor(int *endVetor, int tamanhoVetor, int numSubs)
{

    for (int posicao = 0; posicao < tamanhoVetor; posicao++)
        *(endVetor + posicao) = numSubs;

}

// questão 3: trocar os valores de uma array usando aritmética de ponteiros.
int main ()
{

    int n;
    scanf(" %d", &n);

    int vetor[n];
    for (int i = 0; i < n; i++)
        scanf(" %d", &vetor[0] +i);
    
    int subs;
    scanf(" %d", &subs);

    subsVetor(&vetor[0], n, subs);

    for (int i = 0; i < n; i++)
        printf("%d ", vetor[i]);

    return 1;
}