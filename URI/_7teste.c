#include <stdio.h>

// calcula a idade do filho mais velho baseado na idade de 2 filhos e a mãe
int maisVelho(int mae, int filhoa, int filhob)
{
    // a soma da idade dos filhos é a idade da mãe, então:
    int filhoc = mae -filhoa -filhob;
    int maisVelho = filhoa;
        if (filhob > maisVelho)
        maisVelho = filhob;

    if (filhoc > maisVelho)
        maisVelho = filhoc;

    return maisVelho;
}

// questão 7 - idade dos filhos
int main ()
{

    int idadeMae;    
    do
        scanf(" %d", &idadeMae);
    while (idadeMae < 40 || idadeMae > 110);

    int idadeFilhoA;
    do
        scanf(" %d", &idadeFilhoA);
    while (idadeFilhoA < 0 || idadeFilhoA >= idadeMae);

    int idadeFilhoB;
    do
        scanf(" %d", &idadeFilhoB);
    while (idadeFilhoB < 0 || idadeFilhoB >= idadeMae || idadeFilhoB == idadeFilhoA);

    printf("%d\n", maisVelho(idadeMae, idadeFilhoA, idadeFilhoB));

    return 1;
}