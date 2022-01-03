#include <stdio.h>

// calcula quantidade de sufixos necessários
int calculaSufixo(int nRuas, int nDigitos)
{
    int sufixos = 0;
    int ruas = nRuas - nDigitos;

    for (char letra = 'A'; letra <= 'Z'; letra++)
        if (ruas > 0)
        {
            ruas -= nDigitos;
            sufixos++;
        }   

    return sufixos;
}

// questão 3 - ruas
int main()
{

    int nCasos = 1;
    int nRuas;
    int nDigitos;

    do
    {
        do
            scanf(" %d %d", &nRuas, &nDigitos);
        while ((nRuas > 10000 || nRuas < 0) || (nDigitos < 0)); /* Limites do Enunciado: R < 10001 e N > 0 */

        // código de saída do loop
        if (nRuas == 0 && nDigitos == 0)
            break; 

        if (nRuas <= nDigitos *27) /* Contabilizando os Algarismos Naturais, sem Sufixo */
            printf("Case %d: %d\n", nCasos, calculaSufixo(nRuas, nDigitos));
        else
            printf("Case %d: impossible\n", nCasos);

        nCasos++;
    } while (nCasos < 10002);

    return 1;

}