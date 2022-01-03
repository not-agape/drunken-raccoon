#include <stdio.h>

// questão 5 - calcula o último dígito de 7^n
int main()
{
    int nCasos;
    int expoente;
    int resultado[4] = {1, 7, 9, 3};

    scanf(" %d", &nCasos);
    
    for (int indice = 0; indice < nCasos; indice++)
    {    
        scanf(" %d", &expoente);    
        printf("%d\n", resultado[expoente % 4]);
    }

    return 1;
}

/** 
 * 0 1 1       | ---
 * 1 7 7       | % 1
 * 2 49 9      | % 2
 * 3 343 3     | % 3
 * 4 2401 1    | % 4
 * 5 16807 7   | % 1
 * 6 117649 9  | ...
 * 7 3
 * 8 1
 * 9 7
 * 10 9 
 * 11 3
 */