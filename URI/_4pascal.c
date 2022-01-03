#include <stdio.h>

// calcula potência de um dado número 'num'
int potenciaN(int num)
{
    // caso num = 0, pot = 1
    int pot = 1;

    for (int indice = 0; indice < num; indice++)
        pot *= 2;

    return pot;
}

// dado um número de linhas N, soma todas as entradas do triângulo de pascal
int somaLinhasPascal(int nLinhas)
{
    int soma = 0;

    for (int indice = 0; indice < nLinhas; indice++)
        soma += potenciaN(indice);

    return soma;
}

// questão 4 - calcula a soma de N linhas do triângulo de pascal
int main()
{
    int nCasos;
    int nLinhas;

    scanf(" %d", &nCasos);

    for (int indice = 0; indice < nCasos; indice++)
    {
        scanf(" %d", &nLinhas);
        printf("%d\n", somaLinhasPascal(nLinhas));
    }

    return 1;

}