/**
 * @file av1_1.c
 * @author Pedro Matias (pedromatias@alunos.utfpr.edu.br)
 * @brief 
 * @version 0.1
 * @date 2021-12-13 
 */

#include <stdio.h>
#define n 14                                    // "até 2 entradas por dia"

typedef struct
{
    int dia;
    char atividade[101];
} 
agenda;

// dado um vetor de 'agenda' e seu tamanho lista em função do índice '.dia' 
void imprimeAgenda (agenda* tarefa, int tamanho)
{
    _Bool diasMostrados[tamanho];

    for (int posicao = 0; posicao < tamanho; posicao++)
    {
        int menor = 8;
        int pos_menor = 0;
        
        for (int indice_vetor = 0; indice_vetor < tamanho; indice_vetor++)
            if (!diasMostrados[indice_vetor] && tarefa[indice_vetor].dia < menor)
            {
                menor = tarefa[indice_vetor].dia;
                pos_menor = indice_vetor;
            }

        diasMostrados[pos_menor] = 1;
        switch (tarefa[pos_menor].dia)
        {
            case 1:
                printf("Domingo: %s\n", tarefa[pos_menor].atividade);
            break;
        
            case 2:
                printf("Segunda-Feira: %s\n", tarefa[pos_menor].atividade);
            break;

            case 3:
                printf("Terça-Feira: %s\n", tarefa[pos_menor].atividade);
            break;

            case 4:
                printf("Quarta-Feira: %s\n", tarefa[pos_menor].atividade);
            break;

            case 5:
                printf("Quinta-Feira: %s\n", tarefa[pos_menor].atividade);
            break;

            case 6:
                printf("Sexta-Feira: %s\n", tarefa[pos_menor].atividade);
            break;

            case 7:
                printf("Sábado: %s\n", tarefa[pos_menor].atividade);
            break;

            default:
                break;
        }
    }
}

//Questão 1: Cria Agenda
int main()
{

    agenda a2021[n];
    int temp;
    int contador = 0;

    scanf(" %d", &temp);
    while (temp != 0)
    {
        a2021[contador].dia = temp;
        scanf(" %[^\n]s", a2021[contador].atividade);
        contador++;
        scanf(" %d", &temp);
    }

    imprimeAgenda(a2021, contador);

    return 1; 
}