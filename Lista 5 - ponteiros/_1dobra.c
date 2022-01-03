#include <stdio.h>
#define n 5

// dobra os números dados
void dobraEntrada(int *nEntrada)
{

    for (int i = 0; i < n; i++)
        *(nEntrada + i) *= 2;

}

// calcula o dobro de uma array de números usando ponteiros
int main()
{

    int nEntrada[n];

    scanf(" %d %d %d %d %d", &nEntrada[0], &nEntrada[1], &nEntrada[2], &nEntrada[3], &nEntrada[4]);    
    
    dobraEntrada(&nEntrada[0]);

    for (int i = 0; i < n; i++)
        printf("%d ", nEntrada[i]);
    
    return 1;

}