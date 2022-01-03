#include <stdio.h>
#include <string.h>

// dada uma string e seu tamanho, mostra somente as letras maiúsculas. 
void mostrarMaiusculas(char *s, int n)
{
    for (int posicao = 0; posicao < n; posicao++)
        if (*(s +posicao) >= 'A' && *(s +posicao) <= 'Z')   // se: letra estiver no intervalo das maiúsculas 
            printf("%c", *(s +posicao));                    //  imprima  
}

// questão 4: mostra somente os caracteres maiúsculos de uma string usando aritmética de ponteiros.
int main ()
{
    char s[128];
    scanf(" %[^\n]s", s);

    mostrarMaiusculas(s, strlen(s));

    return 1; 
}