#include <stdio.h>

// percorre a matriz contando quantos candidatos compareceram
int contaCand(int numCand, _Bool *flag)
{
    int contador = 0;

    for (int posicao = 0; posicao < numCand; posicao++)
        if (*(flag + posicao))
            contador++;

    return contador;
}

// questão 11: conta o número de candidatos aprovados
int main ()
{

    int numCand;
    scanf(" %d", &numCand);

    _Bool flagPresenca[numCand];
    
    for (int posicao = 0; posicao < numCand; posicao++)
    {
        int temp;
        scanf(" %d", &temp);
        flagPresenca[posicao] = temp;
    }
    
    printf("%d\n", contaCand(numCand, &flagPresenca[0]));

    return 1; 
}