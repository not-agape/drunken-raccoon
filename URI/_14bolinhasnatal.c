#include <stdio.h>
#include <math.h>

// questão 14: conta quantas bolinhas serão necessárias comprar. 
int main()
{
    int numBolinhas;
    int numGalhos;

    scanf(" %d", &numBolinhas);
    scanf(" %d", &numGalhos);

    if (numBolinhas >= floor(numGalhos /2))
        printf("Amelia tem todas bolinhas!\n");        
    else
        printf("Faltam %d bolinha(s)\n", (int) floor(numGalhos /2) -numBolinhas);

    return 1;
} 