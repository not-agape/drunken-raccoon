#include <stdio.h>

int main() {
    // definição das variáveis
    #define m 4
    #define n 2
    float vetor_Notas[m][n];
    float soma_Aluno, soma_Prova;
    
    // entrada
    for (int lin = 0; lin < m; lin++){
        for (int col = 0; col < n; col++){
            scanf("%f", &vetor_Notas[lin][col]);
        }
    }
    
    // processamento e saída
    printf("Medias:\n");
    for (int lin = 0; lin < m; lin++){
        soma_Aluno = 0;
        for (int col = 0; col < n; col++){
            soma_Aluno += vetor_Notas[lin][col];
        }
        printf("Aluno %d = %.2f\n", lin+1, soma_Aluno/n);
    }
    
    // corre a matriz de cima->baixo e esquerda->direita
    for (int col = 0; col < n; col++){
        soma_Prova = 0;
        for (int lin = 0; lin < m; lin++){
            soma_Prova += vetor_Notas[lin][col];
        }
        printf("Media da prova %d: %.2f\n", col+1, soma_Prova/m);
    }
    
    return (0);
}
