#include <stdio.h>

typedef struct {
    char nome[35];
    float nota;
} rgAluno;

int main (){
    // definição das variáveis
    int nAlunos, nAcima = 0;
    float somaNota, mediaNota;
    scanf("%d", &nAlunos);
    rgAluno aluno[nAlunos];
    
    // entrada de dados
    for (int pos = 0; pos < nAlunos; pos++){
        scanf(" %[^\n]s", aluno[pos].nome);
        scanf(" %f", &aluno[pos].nota);
        somaNota += aluno[pos].nota;
    }
    
    // processamento
    mediaNota = somaNota /nAlunos;
    for (int pos = 0; pos < nAlunos; pos++){
        if (aluno[pos].nota >= mediaNota)
            nAcima++;
    }
    
    // saída
    printf("Media geral da Turma: %.2f\n", mediaNota);
    printf("Alunos com nota acima da media.: %i\n", nAcima);
    printf("Alunos com nota abaixo da media: %i\n", nAlunos -nAcima);
    
    return 0;
}
