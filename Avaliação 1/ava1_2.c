/**
 * @file av1_2.c
 * @author Pedro Matias (pedromatias@alunos.utfpr.edu.br)
 * @brief 
 * @version 0.1
 * @date 2021-12-13
 */

#include <stdio.h>

// dado o endereço de um número 'p', retorna 'p' reverso
void rev(int* p)
{

    int resto[sizeof(int)];     // verificar se o sizeof funciona dessa forma
    int contador = 0;

    for (int n = *p; n != 0; n /= 10, contador++)
        resto[contador] = n % 10;
    
    resto[contador] = '\0';

    int nroRevertido = 0;
    
    for (int indice_resto = 0; indice_resto < contador; indice_resto++)
        nroRevertido = (nroRevertido *10) +resto[indice_resto];
    

    *p = nroRevertido;

}

// Questão 2: Soma reversa entre dois números 
int main()
{

    int a;
    int b;

    scanf(" %d", &a);
    scanf(" %d", &b);
    
    rev(&a);
    rev(&b);

    printf("%d\n", a +b);

    return 1;

}