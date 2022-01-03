#include <stdio.h>

void calculaPar(int *pC, int *pB, int nN)
{

    int presentes[nN *2];

    for (int indice = 0; indice < nN *2; indice++)
        scanf(" %d", &presentes[indice]);
    
    int parExtremos = presentes[0] + presentes[(nN *2) -1];

    if (presentes[nN] +presentes[nN -1] < parExtremos)
    {
        *pC = parExtremos;
        *pB = presentes[nN] + presentes[nN -1];
    }
    else
    {
        *pC = presentes[nN] + presentes[nN -1];
        *pB = parExtremos;    
    }

}

// questão 9: dona ricota e os presentes
int main()
{

    int numNetos;
    int parCaro;
    int parBarato;

    scanf(" %d", &numNetos);

    while (numNetos != 0)
    {
        calculaPar(&parCaro, &parBarato, numNetos);
        printf("%d %d\n", parCaro, parBarato);
        scanf(" %d", &numNetos);
    }

    return 1;
}