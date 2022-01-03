#include <stdio.h>

typedef struct
{
    int medidaX;
    int medidaY;
} env;

// testa se o envelope secundário cabe no principal
_Bool testaEnvelope(env sec, env prin)
{

    if (prin.medidaX <= sec.medidaX)
    {
        if (prin.medidaX <= sec.medidaY)
            return 0;
        else if (prin.medidaY <= sec.medidaX)
            return 0;
    }
    else if (prin.medidaY <= sec.medidaY)
        return 0;
    
    return 1;
}

// questão 6 - testa envelope
int main()
{
    int nCasos;
    
    do
        scanf(" %d", &nCasos);
    while(nCasos < 0 || nCasos > 20);

    env envelope[2];

    for (int indice = 0; indice < nCasos; indice++)
    {
        /* Teste por dimensões estritamente positivas */
        do  // envelope secundário depois envelope primário
            scanf(" %d %d %d %d", &envelope[0].medidaX, &envelope[0].medidaY, &envelope[1].medidaX, &envelope[1].medidaY);
        while (envelope[0].medidaX < 1 || envelope[0].medidaY < 1 || envelope[1].medidaX < 1 || envelope[1].medidaY < 1);

        if (testaEnvelope(envelope[0], envelope[1]))
            printf("S\n");
        else
            printf("N\n");

    }

    return 1;

}