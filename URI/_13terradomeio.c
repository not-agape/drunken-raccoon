#include <stdio.h>

// questão 13: previsão de guerra v1.0
int main()
{
    int numHumanos;
    scanf(" %d", &numHumanos);
    
    int numElfos;
    scanf(" %d", &numElfos);

    int numAnoes;
    scanf(" %d", &numAnoes);

    int numOrcs;
    scanf(" %d", &numOrcs);

    int numWargs;
    scanf(" %d", &numWargs);

    int numAguias;
    scanf(" %d", &numAguias);

    int ladoBem = numHumanos + numAnoes + numAguias + 1; // contando com o Bilbo
    int ladoMal = numOrcs + numWargs;
    
    if (ladoBem >= ladoMal)
        printf("Middle-earth is safe.\n");
    else
        printf("Sauron has returned.\n");

    return 1;
}