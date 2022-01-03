#include <stdio.h>

// percorre uma array no endereço fornecido, sabendo o tamanho N
void mostraPonteiro(int *enderecoVetor, int tamanhoVetor)
{
    for (int posicao = 0; posicao < tamanhoVetor; posicao++)
        printf("%d ", *(enderecoVetor +posicao));    
}

// questão 2: dado um tamanho N e um vetor[N], mostrar o vetor usando só ferramentas de ponteiro
int main ()
{

    // determinação do tamanho da array
    int n;
    scanf(" %d", &n);

    // entrada dos dados da array
    int vetor[n];
    for (int i = 0; i < n; i++)
        scanf(" %d", &vetor[i]);
    
    // chama a função com o endereço da primeira posição do vetor (ver: decay in c)
    mostraPonteiro(&vetor[0], n);

    return 1;
}