#include <stdio.h>

// conta quantos números não consecutivos é possível circular em uma dada sequência de números
int segredoImperador(int *linha, int num)
{
    int anterior = linha[0];
    int contador = 1;

    for (int indice = 1; indice < num; indice++)
    {
        if (linha[indice] != anterior){
            contador++;
            anterior = linha[indice];
        }
    }

    return contador;
}

// questão 8 - calçada do imperador
int main()
{

    int nCasos;
    do
        scanf(" %d", &nCasos);
    while (nCasos < 3 || nCasos > 500);

    int linha[nCasos];

    for (int indice = 0; indice < nCasos; indice++)   
        scanf(" %d", &linha[indice]);
    
    printf("%d\n", segredoImperador(linha, nCasos));

    return 1;
}