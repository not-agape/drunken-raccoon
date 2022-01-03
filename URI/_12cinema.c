#include <stdio.h>

// verifica se uma dupla pode entrar em uma sessão de cinema dadas as idades
_Bool podeEntrar(int a, int b)
{
    if (a < 6 || b < 6)     // se algum dos dois for menor de 6 anos
        return 0;
    
    if (a < 14 && b < 14)   // se ambos forem menores de 14 anos
        return 0;

    return 1;               // resto dos casos
}

// questão 12: 
int main()
{
    int duplaA;
    int duplaB;

    scanf(" %d", &duplaA);
    scanf(" %d", &duplaB);
    
    if (podeEntrar(duplaA, duplaB))
        printf("YES\n");
    else
        printf("NO\n");

    return 1;
}