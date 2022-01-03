#include <stdio.h>

// calcula o maior divisor comum entre 2 números
int maxMultComum(int a, int b)
{

    int maxDiv;
    int maior;

    if (a > b)
        maior = a;
    else
        maior = b;
    
    for (int i = 1; i <= maior; i++)
        if (a % i == 0 && b % i == 0)
            maxDiv = i;
    
    return maxDiv;
    
}

// questão 1 - troca de figurinhas
void main()
{

    // declaração das variáveis
    int nCasos = 0;
    int qtdA;
    int qtdB;

    // entrada de dados
    scanf("%d", &nCasos);

    for (int i = 0; i < nCasos; i++)
    {
        scanf(" %d %d", &qtdA, &qtdB);
        printf("%d\n", maxMultComum(qtdA, qtdB));
    }
}