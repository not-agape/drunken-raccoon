#include <stdio.h>
#include <math.h>

// questão 18: calcula quantas casas brancas e pretas existem em um tabuleiro NXN
int main ()
{
    int tamanho;
    scanf(" %d", &tamanho);

    int casasPretas = floor(pow(tamanho, 2) /2);

    if (tamanho % 2 == 0)
        printf("%d casas brancas e %d casas pretas\n", casasPretas, casasPretas);
    else
        printf("%d casas brancas e %d casas pretas\n", casasPretas +1, casasPretas);
    
    return 1;
}