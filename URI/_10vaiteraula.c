#include <stdio.h>

// dado um número de alunos e os horários que chegaram, define se haverá aula no dia
_Bool vaiTerAula(int numMin, int *horarioChegada, int tamanho)
{
    int contaAlunos = 0;

    for (int posicao = 0; posicao < tamanho; posicao++)
        if (*(horarioChegada + posicao) <= 0)
            contaAlunos++;

    if (contaAlunos >= numMin)
        return 1;
    else
        return 0;
}

// questão 10 - verifica se haverá aula baseado no número de alunos que chegaram na hora para a aula
int main()
{

    int numAlunos;  // n
    int numMin;     // k

    scanf(" %d", &numAlunos);
    scanf(" %d", &numMin);
    
    int horarioChegada[numAlunos];
    for (int indice = 0; indice < numAlunos; indice++)
        scanf(" %d", &horarioChegada[indice]);
    
    if(vaiTerAula(numMin, &horarioChegada[0], numAlunos))
        printf("YES\n");
    else
        printf("NO\n");    
    
    return 1;
}